/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54850
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] [0LL] = arr_1 [i_0 - 1];
        arr_5 [i_0] = ((/* implicit */int) ((arr_2 [i_0]) << (((((arr_1 [i_0 - 1]) + (1396256646))) - (20)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_3] [i_2] [18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) var_8)) : (var_6)))) : (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)))));
                        var_13 = ((/* implicit */unsigned long long int) (-(arr_1 [i_0 - 1])));
                    }
                } 
            } 
        } 
    }
    var_14 = var_2;
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (long long int i_5 = 3; i_5 < 13; i_5 += 3) 
        {
            {
                var_15 = ((((/* implicit */int) (signed char)123)) & (((/* implicit */int) (short)-12765)));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        {
                            arr_24 [i_4] = ((/* implicit */short) max((8905178710908562788ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                            /* LoopSeq 2 */
                            for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                            {
                                var_16 = ((/* implicit */short) var_9);
                                var_17 = ((/* implicit */_Bool) max(((short)-28978), (((/* implicit */short) ((unsigned char) (signed char)127)))));
                            }
                            for (signed char i_9 = 1; i_9 < 12; i_9 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8487619036688421093LL)) ? ((+(((((/* implicit */_Bool) 8487619036688421093LL)) ? (-2687747980717387755LL) : (8487619036688421093LL))))) : (((/* implicit */long long int) var_6))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) 8905178710908562788ULL)) ? (7872569767480947147ULL) : (((/* implicit */unsigned long long int) var_7))))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)45))))), (min((761711715496904096ULL), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) var_6))));
                            }
                            arr_29 [i_7] = ((/* implicit */unsigned long long int) min(((~(-20LL))), (var_3)));
                            arr_30 [i_4] [(signed char)4] [i_5 + 2] [(signed char)4] [i_4] [i_7] = ((/* implicit */unsigned char) ((((((((14LL) - (((/* implicit */long long int) 2254879715U)))) + (9223372036854775807LL))) << (((((long long int) var_11)) - (12206LL))))) << (((((((/* implicit */_Bool) var_3)) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7] [i_6 + 1] [i_5 - 1] [i_4] [i_4]))))) / (((/* implicit */long long int) ((/* implicit */int) (short)4595)))))));
                            var_20 = ((/* implicit */unsigned char) 8487619036688421090LL);
                        }
                    } 
                } 
            }
        } 
    } 
}
