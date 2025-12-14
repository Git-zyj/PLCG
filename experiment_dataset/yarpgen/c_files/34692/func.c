/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34692
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = min((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) min((var_16), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? (-4538108979788185825LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_10))))))));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -4538108979788185825LL)) ? (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-4538108979788185825LL))) + ((+(-4538108979788185825LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((-4538108979788185825LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                                var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_17))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_17))) : (arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1])));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                    var_24 = ((/* implicit */long long int) ((max((((-1067441800) + (((/* implicit */int) var_6)))), ((+(((/* implicit */int) var_19)))))) < (((/* implicit */int) ((min((arr_11 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)92)) ? (3607168480U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((4538108979788185809LL) & (((/* implicit */long long int) -1067441793))))))) ? (3607168499U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4324)))));
    var_26 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (4538108979788185813LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) > (((/* implicit */long long int) min((((/* implicit */int) var_17)), (var_16)))))))) > ((+(var_11)))));
}
