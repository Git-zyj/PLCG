/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4094
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) 3299400126U)) ? (min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) -596604195471798843LL)) ? (((/* implicit */unsigned long long int) -596604195471798843LL)) : (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)702))) <= (216172782113783808ULL))))));
                    var_17 = ((/* implicit */unsigned long long int) -5915547264462920488LL);
                    var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)702)) ? (-596604195471798843LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_19 = ((/* implicit */unsigned short) ((((((((((/* implicit */_Bool) var_11)) ? (-596604195471798843LL) : (3612499008578647027LL))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 2147483648U)))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) 1023U)) && (((/* implicit */_Bool) max((-3612499008578647027LL), (-3612499008578647013LL)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (_Bool)0);
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (((14016871266718783792ULL) >> (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? ((~(var_5))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12594)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16627))) : (0U)))) ? (((/* implicit */long long int) var_12)) : (((((/* implicit */_Bool) 7722874167027191546ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_2)))))));
}
