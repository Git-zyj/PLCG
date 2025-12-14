/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209762
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) (signed char)-46)))) : ((~(((/* implicit */int) (signed char)-19))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (~((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) : (4294967288U)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
                        var_16 = ((/* implicit */short) var_8);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)3142)) ? ((((_Bool)1) ? (((/* implicit */int) (short)21903)) : (((/* implicit */int) arr_22 [i_1] [i_5] [i_6] [i_7])))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-76)))))), (((/* implicit */int) max((((/* implicit */unsigned short) max(((unsigned char)64), (((/* implicit */unsigned char) var_0))))), (var_6))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 10; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) (_Bool)1);
                            arr_27 [(short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)81)), ((short)15959)))) * ((~(((/* implicit */int) (short)18605))))))) ? (((((/* implicit */_Bool) min(((signed char)28), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_1] [(_Bool)1] [i_6] [i_7] [i_7] [i_8 - 1]))))) : ((~(((/* implicit */int) var_13)))))) : (((/* implicit */int) ((signed char) min(((signed char)-3), (((/* implicit */signed char) (_Bool)1))))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((var_14) ? (arr_2 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) ((arr_10 [i_7] [i_5]) ? (((/* implicit */int) (unsigned short)8041)) : (((/* implicit */int) var_3)))))))) ? (((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : ((~(((/* implicit */int) (short)63))))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */unsigned int) var_6);
                        }
                        for (short i_10 = 3; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            var_22 = (unsigned short)57519;
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max(((signed char)3), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) min(((_Bool)1), ((_Bool)0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((+(arr_20 [i_7] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)47556), (((/* implicit */unsigned short) (_Bool)1))))))))));
                            arr_32 [(_Bool)1] [i_1] [i_5] [(short)10] [i_1] [(short)4] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)18010)) << (((/* implicit */int) (_Bool)0))))) ? (min((var_10), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)32198)) : (((/* implicit */int) (unsigned short)45256))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (short i_11 = 3; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            var_24 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (unsigned short)52200)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_5] [i_6] [i_11]))) : (195988658U))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)-6687)))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_34 [(_Bool)1] [i_5] [i_6] [i_7] [i_11 + 1]))))));
                            var_25 = ((/* implicit */short) (_Bool)1);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_12 = 1; i_12 < 9; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (signed char i_14 = 1; i_14 < 9; i_14 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_15 = 1; i_15 < 11; i_15 += 2) 
                        {
                            arr_45 [i_13] = ((/* implicit */signed char) (short)8787);
                            var_26 = ((/* implicit */signed char) max((((/* implicit */int) var_4)), ((-(((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) (short)6662)) : (((/* implicit */int) (unsigned char)159))))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-8790)) * (((/* implicit */int) arr_11 [i_13]))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) (unsigned short)3000);
                            arr_48 [i_16] [(signed char)8] [i_13] [i_13] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)252))))) ? ((-(((/* implicit */int) (unsigned char)27)))) : (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_8))))));
                            arr_49 [(_Bool)1] [i_1] [i_13] [(_Bool)1] [i_14] [i_16] = (_Bool)0;
                            arr_50 [i_1] [i_13] [i_13] [i_13] [i_14 - 1] [i_16] = ((/* implicit */signed char) (short)13982);
                        }
                        arr_51 [i_1] [i_12 + 1] [i_13] [i_13] [i_1] = ((/* implicit */signed char) (short)10);
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) max(((unsigned short)62536), (((/* implicit */unsigned short) (short)-8796))));
        }
    }
    var_30 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (short i_17 = 0; i_17 < 24; i_17 += 4) 
    {
        for (unsigned short i_18 = 1; i_18 < 21; i_18 += 1) 
        {
            for (unsigned int i_19 = 1; i_19 < 23; i_19 += 1) 
            {
                {
                    var_31 = arr_56 [i_17] [i_17];
                    arr_58 [i_17] [i_19] [i_17] = ((/* implicit */_Bool) (-(((/* implicit */int) max((min(((short)29712), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)76)))))))));
                    arr_59 [i_17] [i_19] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) arr_57 [i_17] [(unsigned char)16] [i_17] [i_17])), (var_7)))) - (((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)18010)))) + (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
    {
        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            {
                var_32 = ((/* implicit */signed char) arr_60 [i_20] [i_21]);
                var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-13))));
                arr_64 [i_20] [i_20 - 1] [i_20 - 1] = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned int) min(((short)-31761), (((/* implicit */short) var_12))));
}
