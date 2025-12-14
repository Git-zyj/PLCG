/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26178
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
    var_17 = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2979003920783108113ULL)) ? (7807918183847107045ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))), (var_3));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), ((unsigned char)0)));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2566140551090449125ULL)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)59))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) 12480435117254698098ULL))), (var_16))))))));
                        arr_12 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned char)21)))) > (((/* implicit */int) (unsigned char)59))));
                        var_21 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)59))));
                        arr_13 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))) < (((8980549238574285779ULL) >> (((16573390097036777251ULL) - (16573390097036777199ULL))))))))));
                    }
                } 
            } 
        } 
    }
    var_22 = max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)109))))), (5316411740016593531ULL))), (var_2));
}
