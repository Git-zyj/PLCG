/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26188
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */short) ((((unsigned long long int) var_7)) <= (((/* implicit */unsigned long long int) ((unsigned int) 1880308440U)))))), (var_6))))));
    var_17 -= ((/* implicit */unsigned long long int) 1880308453U);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned int) ((unsigned char) var_4));
            var_19 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_1)))) + (2147483647))) << (((/* implicit */int) (_Bool)0))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((_Bool) arr_2 [i_0 + 1]))), (((signed char) var_3))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 8; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) var_13)) : (6917529027641081856ULL)))));
        var_22 ^= ((/* implicit */long long int) ((signed char) arr_8 [i_2 - 2]));
    }
    for (int i_3 = 3; i_3 < 8; i_3 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */short) (+(-1043958291941194576LL)));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) var_6);
                        var_25 ^= min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_3])), (arr_19 [i_3] [4ULL] [i_5] [i_6]))))))));
                        var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_8 [i_3]), (((/* implicit */signed char) var_11))))) ? (((((/* implicit */_Bool) var_15)) ? (-1337560969) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((short) (unsigned char)76)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            {
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) min(((-(((/* implicit */int) var_12)))), ((+(((/* implicit */int) ((_Bool) (unsigned char)0))))))))));
                var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7]))) & ((((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7])))))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 597710258556415851LL)) ? (((/* implicit */int) arr_3 [i_8] [i_7])) : (arr_23 [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) : (var_4)));
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (_Bool)1))));
                var_31 = ((/* implicit */_Bool) arr_2 [i_8]);
            }
        } 
    } 
}
