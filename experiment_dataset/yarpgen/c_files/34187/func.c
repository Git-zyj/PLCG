/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34187
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)57990))))) : (arr_3 [i_0] [i_0])));
        var_12 = ((/* implicit */unsigned char) min((arr_3 [i_0] [i_0]), ((+(((/* implicit */int) arr_1 [i_0]))))));
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)33833)) ? (((/* implicit */int) (short)24162)) : (((/* implicit */int) (unsigned short)31681)))), (((/* implicit */int) ((((/* implicit */int) (short)-24145)) > (-1013141859)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) min((((int) (-(var_7)))), (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_10))))))));
            var_15 = ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)19922))) : (-311522253674319337LL))) < (((/* implicit */long long int) ((/* implicit */int) (short)6327)))));
        }
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) -462792268)))))));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_9 [2U] [i_2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)31692))));
        var_17 = arr_4 [i_2];
        var_18 = ((/* implicit */signed char) min((((/* implicit */int) var_1)), (min((arr_8 [i_2]), (min((arr_8 [i_2]), (((/* implicit */int) arr_7 [i_2]))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                arr_19 [i_3] [i_4] [i_5 + 1] &= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24145))))))));
                arr_20 [i_3 + 1] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3])) > (arr_12 [i_3]))))) + (((unsigned int) var_8))));
                var_20 &= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)33842))));
                var_21 ^= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) ^ (arr_14 [i_5] [i_3]))) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) -415920314)) : (1670270665560138053ULL)))));
            }
            for (int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_22 = ((/* implicit */short) (((-(((/* implicit */int) arr_18 [i_3] [i_3] [i_6])))) / (((/* implicit */int) ((_Bool) arr_11 [i_6] [i_3])))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_3))));
            }
            for (int i_7 = 4; i_7 < 12; i_7 += 2) 
            {
                arr_27 [i_7 + 3] [i_4] [2ULL] = (!(((/* implicit */_Bool) arr_18 [i_3 + 2] [i_3 + 2] [i_7 - 3])));
                arr_28 [i_3 + 3] [i_4] [i_3 + 3] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 4])) - (((/* implicit */int) arr_18 [i_7 + 1] [i_7 - 4] [i_7 - 2]))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            arr_33 [i_3] [i_4] [i_9] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_3 + 3])) >> (((((/* implicit */int) (signed char)118)) - (110)))));
                            var_24 = ((/* implicit */unsigned short) ((arr_12 [i_3 - 1]) % (arr_12 [i_3 - 1])));
                            arr_34 [i_3] [i_3] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) arr_5 [i_3 - 2] [i_7 + 4]);
                            arr_35 [i_3] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3 + 1])) | (((/* implicit */int) (unsigned char)222))));
                            var_25 &= ((/* implicit */_Bool) ((unsigned long long int) (+(-1731782314))));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 7843179916927283110ULL)) || (((/* implicit */_Bool) (short)-24193)))))))));
        }
        for (short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
        {
            arr_39 [i_3] = ((/* implicit */unsigned char) (~(arr_29 [i_3 + 4] [i_10])));
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(var_5))))));
            arr_40 [8ULL] = ((/* implicit */short) 1472427733U);
            var_28 = ((/* implicit */unsigned short) (+(var_4)));
        }
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_5 [i_3 + 1] [i_3 + 3]))));
        arr_41 [i_3] |= ((/* implicit */short) (+(9016776935647973667LL)));
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)98)), ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-48))));
}
