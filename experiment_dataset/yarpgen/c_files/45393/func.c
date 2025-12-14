/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45393
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) (signed char)-39))))) ? (((/* implicit */int) (unsigned short)31645)) : ((~(((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) ((((((/* implicit */int) (short)0)) >= (((/* implicit */int) var_7)))) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) (short)1);
                    var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((short) arr_1 [i_0])))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-97))));
                        arr_12 [(short)0] [(signed char)6] [i_2] [i_3] [(short)0] |= var_1;
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [i_0 + 1] [i_0] [(unsigned short)10] [(signed char)2] [(_Bool)1] [i_3] [i_0] = ((unsigned short) arr_8 [i_0] [i_3 + 2] [i_2] [i_2 - 1] [i_0 - 2]);
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) ((unsigned short) var_5)))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */short) (_Bool)1);
                            arr_19 [i_0 + 2] [i_1] [i_0] [(_Bool)1] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)22081))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0] [i_6])) ? ((-(((/* implicit */int) (unsigned short)22161)))) : (((/* implicit */int) (unsigned short)22161))));
                var_17 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
            }
            for (short i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
            {
                var_18 *= ((/* implicit */unsigned short) arr_18 [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0 + 2]);
                arr_28 [i_0] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_18 [i_8] [i_6] [i_0] [(_Bool)1])))));
                var_19 = ((/* implicit */_Bool) arr_0 [i_0]);
                var_20 -= ((/* implicit */_Bool) ((arr_20 [(short)2] [i_8] [(short)2]) ? (((/* implicit */int) arr_4 [(_Bool)0] [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) arr_4 [(_Bool)0] [i_0 + 1] [i_8]))));
            }
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned short) (signed char)-85);
                            arr_40 [i_0] [i_6] [i_0] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) arr_6 [i_0])) : (((((/* implicit */_Bool) (short)29809)) ? (((/* implicit */int) arr_31 [i_0] [(signed char)6] [i_9] [(short)7])) : (((/* implicit */int) var_7))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (short)-7902))));
            arr_41 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) (signed char)-68);
            arr_42 [i_0] [(signed char)0] [i_0] = ((/* implicit */_Bool) (unsigned short)28969);
        }
        var_23 += ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (short)1023)))));
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-95))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)12316)))) ? (((/* implicit */int) (short)-432)) : (((((/* implicit */int) (short)1)) / (((/* implicit */int) var_1)))))) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_13]))));
                    var_25 = ((/* implicit */_Bool) (short)-7911);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        arr_51 [i_14] [i_14] = ((short) arr_50 [i_14]);
        var_26 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22847)) ? (((/* implicit */int) arr_49 [(unsigned short)8] [i_14])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((arr_50 [(_Bool)1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-1)))))) <= (((((/* implicit */_Bool) (signed char)44)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)16320)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (short)12288))))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_50 [i_14]) ? (((/* implicit */int) arr_50 [i_14])) : (((/* implicit */int) (short)-14288))))) ? (((/* implicit */int) (short)1984)) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)32)) : (((((/* implicit */_Bool) (short)15123)) ? (((/* implicit */int) (unsigned short)58145)) : (((/* implicit */int) (short)-1))))))));
    }
    var_28 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */short) (signed char)96))));
}
