/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239058
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
    var_19 = max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) min((1748060422), (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_12)) ? (-6408430226685073813LL) : (((/* implicit */long long int) -1522653125)))))), (((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [(_Bool)1] [i_2] [i_3] = -1804164565120263942LL;
                        arr_13 [12] [i_1] [i_0] [i_3] [i_0] [(_Bool)1] = ((/* implicit */long long int) (-(arr_2 [i_1 - 2])));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */long long int) (+(-1879724598)));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_22 [14ULL] [(unsigned char)8] [i_0] = ((/* implicit */unsigned char) (-(-7901605698305159739LL)));
                    arr_23 [i_0] = var_10;
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 822583220U))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_18)), (var_6)))))))) : (var_5)));
    var_21 = var_14;
}
