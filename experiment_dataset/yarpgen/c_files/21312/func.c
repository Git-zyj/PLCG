/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21312
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
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_6)) / (((/* implicit */int) (short)31))))));
                    var_22 = ((/* implicit */_Bool) (~(min((arr_3 [i_0] [i_2 - 1] [i_2]), (((/* implicit */int) arr_5 [i_2] [i_2 + 2] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) (short)-32))), ((~(((/* implicit */int) (short)-32))))));
                                var_24 = ((/* implicit */unsigned int) max((((/* implicit */int) (short)41)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_1 - 1] [i_1 - 3]))))));
                                arr_14 [i_2] = ((/* implicit */int) ((unsigned short) (((~(((/* implicit */int) var_18)))) < (((/* implicit */int) ((var_13) == (((/* implicit */int) arr_9 [i_2] [i_1 - 3] [i_2 - 1] [i_3]))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */short) var_3)), ((short)-51)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        var_27 = ((_Bool) var_0);
        var_28 = ((/* implicit */_Bool) (~(var_15)));
        var_29 = ((/* implicit */unsigned int) (short)31);
    }
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        var_30 = ((/* implicit */_Bool) var_17);
        arr_20 [i_6] = ((((/* implicit */int) ((_Bool) arr_16 [i_6] [i_6]))) == (((/* implicit */int) max((max(((short)39), (((/* implicit */short) var_2)))), (((/* implicit */short) max((var_6), (((/* implicit */unsigned char) arr_15 [20] [i_6])))))))));
        var_31 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((int) var_15))) && (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10))))))));
        arr_21 [9] [i_6] = ((/* implicit */short) var_18);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 20; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                {
                    var_32 = ((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_7]);
                    arr_29 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)8), ((short)-17)))) ? ((-(var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)16))))));
                    var_33 = ((/* implicit */unsigned int) arr_28 [i_7] [20] [i_9] [i_9]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_34 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-32)))) ? ((+(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-16))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                            var_36 = ((/* implicit */int) (short)37);
                        }
                    } 
                } 
            }
            for (int i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                var_37 = (-(((arr_25 [i_7]) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) arr_27 [i_7] [(_Bool)1])))));
                var_38 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */long long int) ((((arr_42 [i_7] [i_7] [(unsigned char)4] [i_14]) == (arr_33 [i_7] [i_10] [i_14]))) ? (((/* implicit */int) max(((short)46), ((short)-32)))) : (((/* implicit */int) ((arr_25 [i_7]) || (arr_28 [i_7] [i_7] [i_7] [i_14])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_15 = 2; i_15 < 21; i_15 += 4) 
                {
                    var_39 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_3)))) == (((var_2) ? (var_7) : (((/* implicit */int) var_3))))));
                    var_40 = ((/* implicit */_Bool) (+(((/* implicit */int) ((var_7) == (((/* implicit */int) var_1)))))));
                    arr_46 [i_7] [i_10] [i_7] [i_15] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((var_2) ? (((/* implicit */int) arr_16 [i_7] [i_7])) : (((/* implicit */int) var_11))))));
                    var_41 = ((/* implicit */long long int) ((arr_38 [i_7] [i_7] [i_7] [i_7]) == (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                }
                for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    var_42 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) arr_48 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (short)-13)) : (var_14))))));
                    arr_49 [i_7] [i_10] [i_10] [i_10] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-62))))) ? (((/* implicit */int) ((unsigned short) ((short) arr_45 [i_7] [i_10])))) : (((int) ((((/* implicit */_Bool) (short)-54)) || (((/* implicit */_Bool) var_8)))))));
                }
            }
            var_43 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_27 [i_7] [i_10])))) ? (((long long int) var_16)) : (((/* implicit */long long int) min((arr_23 [i_7]), (((/* implicit */unsigned int) var_14)))))));
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_7] [i_10])) ? (((/* implicit */unsigned long long int) arr_38 [i_7] [(_Bool)0] [i_10] [i_7])) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_12))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-34)))))));
            arr_50 [i_7] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) == (var_13))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) max(((short)24), ((short)-17))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10))) : (var_8)));
            arr_51 [i_10] [i_7] [i_7] = ((/* implicit */_Bool) (short)-46);
        }
        for (short i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)38)) ? (((/* implicit */int) var_5)) : (var_14)))))) ? ((~((~(((/* implicit */int) (short)-15)))))) : (max((((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)-31)))), (((/* implicit */int) ((unsigned char) arr_25 [i_17])))))));
            var_46 = ((/* implicit */long long int) (((~(((/* implicit */int) (short)-17)))) < (((/* implicit */int) min((((_Bool) (short)8)), (((var_12) > (((/* implicit */long long int) var_13)))))))));
            var_47 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((var_11), (((/* implicit */unsigned char) arr_25 [i_7])))))));
        }
        var_48 = ((/* implicit */unsigned int) (+(((int) ((((/* implicit */_Bool) (short)46)) ? (((/* implicit */int) var_9)) : (var_14))))));
        var_49 = ((/* implicit */long long int) var_8);
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_50 = min((((/* implicit */unsigned int) ((signed char) (short)-20))), (((unsigned int) (!(((/* implicit */_Bool) (short)10))))));
        var_51 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_33 [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)37))) : (var_8))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_19)))));
        arr_56 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)18)))) : (((((/* implicit */_Bool) (short)-59)) ? (((/* implicit */int) max(((short)11), ((short)-31)))) : (var_7)))));
        var_52 = ((/* implicit */unsigned int) var_13);
    }
}
