/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236195
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (7652264282662597422LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) (~(arr_2 [(short)7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12292)) ? (((/* implicit */int) (short)-12281)) : (((/* implicit */int) (signed char)-33))))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [2ULL] [i_1] [i_0 - 2]))))))) : (((/* implicit */unsigned long long int) (~(7652264282662597407LL))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 7; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [(unsigned short)2] [(short)9] [i_1] = ((/* implicit */_Bool) (~((~(-7652264282662597409LL)))));
                                var_14 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)33155)) : (-660245898)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_5 = 2; i_5 < 19; i_5 += 2) 
    {
        arr_17 [(short)3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(signed char)2])) ? (8154197687665129680ULL) : (7ULL))))));
        var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 7652264282662597436LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : ((+(0ULL)))));
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned short)15])) ? (((/* implicit */int) arr_15 [(_Bool)1])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5 - 2]))) : (var_3))) : (((/* implicit */unsigned long long int) (+(879146338U))))));
    }
    for (unsigned short i_6 = 4; i_6 < 21; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            arr_23 [(_Bool)1] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6 + 2])) ? (((/* implicit */unsigned long long int) -486422818894523359LL)) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : ((-(((/* implicit */int) arr_19 [9ULL])))))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2454528100U)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? ((+(2111934972))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -486422818894523359LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)2182))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)5635)))))) : (((((/* implicit */_Bool) (unsigned short)2178)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-7652264282662597409LL)))))));
            /* LoopNest 2 */
            for (signed char i_8 = 3; i_8 < 23; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))))))))));
                        arr_30 [9LL] [(_Bool)1] [(unsigned short)13] [i_8 - 3] [i_8] [i_9] = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) (short)-12292)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2075))) : (3132739191U)))));
                    }
                } 
            } 
        }
        var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) 623587011)) : (-2409927487552731404LL)))) ? (((/* implicit */int) (short)-32292)) : ((-(((/* implicit */int) (signed char)-60))))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2107563531U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59)))))) ? (((((/* implicit */_Bool) (unsigned short)46099)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6 - 3]))) : (7454144979866357021LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-79))))))))))));
    }
}
