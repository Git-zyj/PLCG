/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237171
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (-(((int) var_18))));
                                arr_12 [i_2] [i_3] [i_1] = ((/* implicit */signed char) (+(((long long int) ((unsigned long long int) (-9223372036854775807LL - 1LL))))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_8)) ? (((long long int) var_6)) : (max((((/* implicit */long long int) var_16)), (var_5))))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */short) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (var_18))))))));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = (~(((/* implicit */int) var_16)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) == (18U)))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((signed char) ((var_0) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
                            var_23 = ((/* implicit */int) ((_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                        }
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 35115652612096LL)) ? (-7702255764713781479LL) : (((/* implicit */long long int) 383127829))))))));
                            arr_27 [(_Bool)1] [(unsigned short)9] [i_6] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) ^ (15583412904521116547ULL)))) ? (((/* implicit */int) ((signed char) var_17))) : (((/* implicit */int) ((_Bool) var_5)))));
                            var_25 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) < (var_17)));
                            arr_28 [i_6] [i_6] = ((/* implicit */long long int) ((((var_1) == (((/* implicit */long long int) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_12))));
                        }
                        for (long long int i_10 = 2; i_10 < 17; i_10 += 2) 
                        {
                            arr_31 [i_0] [i_5 + 1] [i_5 + 1] [i_6] = ((/* implicit */signed char) ((int) var_10));
                            arr_32 [i_10 - 2] [i_7] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */short) var_14);
                            var_26 = ((/* implicit */unsigned int) var_3);
                        }
                        var_27 = ((int) (~(var_14)));
                    }
                } 
            } 
        }
        var_28 -= ((/* implicit */int) var_13);
        arr_33 [(signed char)17] = (+(((long long int) (_Bool)0)));
    }
    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        arr_36 [i_11] = var_10;
        /* LoopSeq 3 */
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            arr_39 [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_18)) : (var_9)))))) ? (((((unsigned long long int) var_3)) / (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
            var_29 -= ((/* implicit */int) ((_Bool) (-2147483647 - 1)));
            arr_40 [i_12] [i_11] [i_11] = ((/* implicit */long long int) ((unsigned char) var_11));
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 21; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_50 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) var_10);
                        arr_51 [i_11] [i_13] [i_11] [i_15] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))));
                        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
                    }
                } 
            } 
            arr_52 [i_11] [i_11] [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17169753653519324077ULL)));
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                arr_56 [i_11] [i_13] [i_13] = ((/* implicit */int) var_1);
                var_31 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) / (var_9)))) ? (((long long int) var_14)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_14)) : (var_1))));
                var_32 -= ((/* implicit */int) ((short) ((unsigned long long int) var_6)));
            }
            for (long long int i_17 = 1; i_17 < 19; i_17 += 2) 
            {
                var_33 = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) (_Bool)1)))));
                arr_60 [i_11] [i_11] [i_11] = ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */long long int) var_18)) : (((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */long long int) var_6)))));
                var_34 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) var_7)) : (var_18)))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((int) var_3)))));
            }
        }
        /* vectorizable */
        for (unsigned int i_18 = 3; i_18 < 21; i_18 += 2) 
        {
            var_35 = ((/* implicit */signed char) var_4);
            arr_64 [i_18] = ((/* implicit */int) var_5);
            var_36 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_0)))) == ((~(((/* implicit */int) var_16))))));
        }
    }
    var_37 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)5299)) | (((/* implicit */int) (_Bool)1))))))) || (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) >= ((-9223372036854775807LL - 1LL))))));
}
