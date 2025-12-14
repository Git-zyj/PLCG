/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24845
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
    var_15 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = ((short) ((long long int) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (signed char)26)))));
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 13; i_2 += 2) /* same iter space */
                {
                    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-6553))))) ? (((/* implicit */int) ((signed char) (short)-7))) : (((/* implicit */int) ((short) var_2)))));
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) var_14)))));
                }
                for (signed char i_3 = 2; i_3 < 13; i_3 += 2) /* same iter space */
                {
                    var_18 &= ((/* implicit */_Bool) ((unsigned long long int) ((((_Bool) (unsigned char)183)) ? ((+(((/* implicit */int) (unsigned char)54)))) : (((/* implicit */int) ((_Bool) arr_3 [i_3] [i_3 + 1]))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_0] [(unsigned short)12] [i_3] [i_3] [i_1] = ((/* implicit */signed char) ((_Bool) ((unsigned char) arr_6 [i_1] [i_1] [i_4 + 1] [i_1])));
                        var_19 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 72057593903710208ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2650))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_17 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */unsigned int) -206306362)) : ((+(4294967293U)))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_0 - 1] [i_3] [i_0 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_4 + 1])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [(_Bool)1] [i_0 - 1] [i_4 + 3] [i_4 + 2]))) : (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [i_1] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_4 + 3])) : (((/* implicit */int) arr_13 [i_1] [(_Bool)1] [(_Bool)1] [2] [i_4 + 4])))))));
                        }
                    }
                    for (unsigned int i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        var_21 ^= ((unsigned short) ((((/* implicit */_Bool) -206306362)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_11 [i_3] [i_6 - 2] [i_6 + 2] [i_6 + 2]))))))));
                        arr_22 [i_0] [i_1] [i_1 - 1] [i_3] [i_1] [i_6] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(206306361)))) ? (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned long long int) 37787105)) : (11373347952612881737ULL))) : (((/* implicit */unsigned long long int) var_6))))));
                        arr_23 [i_0 - 1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) arr_13 [i_1] [i_3 + 1] [i_1 + 3] [i_1] [i_1]))))));
                    }
                }
                /* vectorizable */
                for (signed char i_7 = 2; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 12; i_8 += 1) 
                    {
                        for (short i_9 = 2; i_9 < 13; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_8 + 2]))) ? (((/* implicit */int) (unsigned short)65535)) : (-2138953065))))));
                                var_24 = ((/* implicit */short) ((long long int) (short)6105));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned long long int) (signed char)103)))));
                }
                /* LoopNest 3 */
                for (unsigned char i_10 = 3; i_10 < 13; i_10 += 2) 
                {
                    for (unsigned short i_11 = 4; i_11 < 11; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_0] [i_10] [i_11] [i_12 + 2]))) ? (((int) var_5)) : (((/* implicit */int) ((_Bool) arr_11 [i_12 + 2] [(_Bool)1] [i_0 - 2] [i_0 - 2]))))))));
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((short) ((_Bool) (!(((/* implicit */_Bool) var_0)))))))));
                                var_28 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (signed char)-16))))));
                            }
                        } 
                    } 
                } 
                arr_37 [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_11)) ? (var_2) : (var_2)))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((long long int) var_1))))));
}
