/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193079
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) (signed char)127)))))) : (var_3)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_13 *= ((/* implicit */unsigned char) ((long long int) var_9));
            var_14 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((short) var_8)), (((/* implicit */short) (_Bool)1)))))));
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_0))));
            var_16 += ((/* implicit */unsigned short) max(((+((~(((/* implicit */int) var_11)))))), ((+(((/* implicit */int) arr_1 [i_0]))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */_Bool) var_5);
            var_18 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_2])))))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9))));
            arr_10 [i_0] [(unsigned short)14] = ((/* implicit */unsigned char) var_1);
            var_20 *= ((/* implicit */unsigned short) arr_3 [(unsigned char)5] [(unsigned char)5] [i_0]);
        }
        var_21 = ((/* implicit */short) ((min((arr_8 [i_0]), (((/* implicit */unsigned long long int) var_0)))) << (((max((arr_8 [i_0]), (var_2))) - (12614338021666229897ULL)))));
    }
    var_22 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) -497971657))))))), (((/* implicit */int) var_9)))))));
                            /* LoopSeq 2 */
                            for (long long int i_8 = 1; i_8 < 18; i_8 += 4) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_8 [i_4 - 2])) ? ((~(arr_12 [i_4]))) : ((-(((/* implicit */int) arr_4 [(unsigned short)13] [11ULL])))))) : (((/* implicit */int) (!((!(var_6))))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) arr_17 [i_4 + 1])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_0), (var_0)))))))));
                            }
                            for (long long int i_9 = 1; i_9 < 18; i_9 += 4) /* same iter space */
                            {
                                var_27 = ((/* implicit */unsigned short) (short)2117);
                                var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_6])) / (((/* implicit */int) arr_1 [i_4 - 2])))))));
                            }
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4 - 2] [i_5])) | (((/* implicit */int) arr_4 [i_4] [i_4 - 2]))))) || (((/* implicit */_Bool) ((((_Bool) (_Bool)0)) ? (min((var_2), (arr_14 [i_4] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_18 [i_4] [i_5] [i_7] [i_7]))))))))))));
                        }
                    } 
                } 
                var_30 += ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)18))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
}
