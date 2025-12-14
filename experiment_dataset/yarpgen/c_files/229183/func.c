/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229183
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1223284139193224180ULL)) ? (1223284139193224184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_15 = ((/* implicit */unsigned char) ((1223284139193224174ULL) <= (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 511362006U)) ^ (17223459934516327447ULL)))) ? (((/* implicit */unsigned long long int) 3559936654U)) : (1223284139193224145ULL)))));
    var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1710360406948227137ULL)))) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) max((((/* implicit */int) var_11)), ((~(var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned long long int) ((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                        var_18 = ((/* implicit */int) arr_0 [i_1] [i_3]);
                        var_19 += ((/* implicit */unsigned int) arr_7 [i_1] [i_2]);
                        arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_2 [i_1] [i_0]) <= (((/* implicit */unsigned long long int) var_13))));
                    }
                } 
            } 
            arr_12 [i_1] = ((/* implicit */unsigned long long int) ((17223459934516327460ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) 2147483628)) : (var_13))))));
        }
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2)))))));
    }
}
