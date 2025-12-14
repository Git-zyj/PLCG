/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36122
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
    var_18 |= ((/* implicit */unsigned char) var_10);
    var_19 = ((/* implicit */int) max(((~(((long long int) 9221079385867209941ULL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (9221079385867209931ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (9221079385867209932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32751)) ? (-1498085645980626004LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (max((((/* implicit */unsigned long long int) var_10)), (9221079385867209920ULL))))), (((/* implicit */unsigned long long int) (short)32752)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] &= ((/* implicit */long long int) (unsigned char)244);
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 9225664687842341703ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (min((9221079385867209941ULL), (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(9221079385867209941ULL)))))) : ((~(9225664687842341683ULL)))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 9221079385867209912ULL))))))), (((/* implicit */int) ((unsigned short) (unsigned char)36)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (-(min((var_3), (((/* implicit */int) (unsigned short)22580))))));
                        var_22 = ((/* implicit */int) 9221079385867209941ULL);
                        arr_14 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((9225664687842341684ULL), (((/* implicit */unsigned long long int) 6848261877955112872LL))))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9225664687842341701ULL)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)21188))))) : ((+(var_10))))) / (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)237)) << (((((/* implicit */int) var_11)) - (238)))));
                            arr_17 [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)42965)) ? (arr_4 [i_1]) : (arr_4 [i_1]))), (max((9221079385867209932ULL), (arr_4 [i_1])))));
                            arr_18 [(unsigned char)23] [i_1] [i_3] [i_2] [i_1 - 1] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((arr_3 [i_0] [i_1 + 1]) << (((9221079385867209908ULL) - (9221079385867209852ULL))))));
                            arr_19 [i_1] [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1 - 1] [i_3])), (9221079385867209932ULL)));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) (-(arr_3 [i_2] [i_5])));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) 3706983083878059126LL))));
                            var_27 &= ((/* implicit */long long int) var_15);
                        }
                    }
                } 
            } 
            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 1593735597)) ? (((/* implicit */int) arr_20 [i_1 + 1])) : (((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_27 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (((-(min((2147483646LL), (arr_8 [i_0] [i_0] [i_6] [i_6]))))) / (((/* implicit */long long int) ((int) ((unsigned short) -287086025))))));
            var_28 = ((/* implicit */unsigned long long int) ((short) (short)-16934));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 1; i_7 < 24; i_7 += 1) 
            {
                var_29 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)31847)) ^ (((/* implicit */int) (unsigned short)8192)))), (((var_14) + (((/* implicit */int) (_Bool)1))))));
                arr_31 [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 9221079385867209932ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)20))))));
            }
            var_30 = ((/* implicit */unsigned char) arr_1 [i_0]);
        }
    }
    for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 3) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (unsigned char i_10 = 3; i_10 < 20; i_10 += 4) 
            {
                {
                    var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9225664687842341683ULL))));
                    arr_40 [i_8] = ((/* implicit */unsigned short) (-((~(((((/* implicit */_Bool) 2045728487)) ? (((/* implicit */int) arr_13 [i_8 - 2] [i_8] [i_8 - 1] [i_8 - 2])) : (((/* implicit */int) (unsigned char)20))))))));
                    var_32 = ((/* implicit */long long int) ((_Bool) ((arr_8 [i_8] [i_9] [i_8] [i_8]) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))));
                    var_33 ^= ((/* implicit */unsigned char) 9225664687842341703ULL);
                }
            } 
        } 
    }
}
