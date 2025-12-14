/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21838
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 &= (signed char)(-127 - 1);
        var_17 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_9))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4128838377326671830ULL)) ? (min((arr_1 [i_0] [i_0]), (max((var_8), (16143233297168878717ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_6)) <= (((((/* implicit */_Bool) 13707750679679564459ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2056976022U)))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_9 [i_1 - 2] [i_3] [i_3]) : (((/* implicit */unsigned int) var_5))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (2303510776540672898ULL)))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (((long long int) 16143233297168878722ULL))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2264664035U)) ? (17314226451748795274ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_7 [i_1]))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)146))))))))));
                arr_21 [i_6] [i_2] [i_1 - 1] [(unsigned char)15] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_1] [i_2] [i_6])) >> (((var_8) - (12403197188732550513ULL)))))) / (8614103581025699205LL)));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_8))));
            }
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((arr_11 [i_1 - 2] [i_2]) - (17301660331297978696ULL)))));
                var_25 = ((/* implicit */long long int) var_13);
            }
            var_26 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [20LL] [i_2] [i_1 - 1] [i_1 - 1]))));
        }
        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            var_27 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_8] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0])) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_8])))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(6869286551059521901LL)))) ? (arr_16 [i_1] [i_1 - 1] [i_8] [i_8] [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_9 = 2; i_9 < 21; i_9 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_24 [i_1] [i_1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(_Bool)1])))));
            var_30 = ((/* implicit */int) var_15);
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (unsigned char)237))));
            var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1LL)) ? (16143233297168878717ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) > (((/* implicit */unsigned long long int) arr_25 [i_1 + 1]))));
        }
    }
    var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
    var_34 = ((/* implicit */signed char) var_9);
    var_35 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1102579500)) ? (2305843009213693951ULL) : (11077290368529217661ULL))), (((((/* implicit */_Bool) var_1)) ? (16143233297168878717ULL) : (var_15)))))) ? (var_15) : (var_10));
}
