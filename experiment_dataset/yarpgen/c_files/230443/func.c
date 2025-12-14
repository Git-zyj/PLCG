/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230443
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
    var_13 = ((/* implicit */signed char) ((((var_0) - (((/* implicit */unsigned long long int) -6399134478002502070LL)))) % (((/* implicit */unsigned long long int) ((var_12) % (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)65517))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))) / (1397707961U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) max((arr_4 [i_0]), (((/* implicit */short) (signed char)127))))), ((unsigned short)4))))));
                arr_7 [i_1] &= ((/* implicit */_Bool) ((max((max((9006147534314585006ULL), (((/* implicit */unsigned long long int) (signed char)123)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65504)) == (((/* implicit */int) arr_6 [i_1]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0 + 4])), (arr_3 [i_1]))) < (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))))));
                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) min((arr_0 [i_1]), ((unsigned char)1)))) & (((/* implicit */int) ((81842556192532849LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226)))))))) + (((((/* implicit */int) min(((unsigned short)50069), ((unsigned short)53295)))) - (((((/* implicit */int) (unsigned char)153)) / (((/* implicit */int) (unsigned short)65517))))))));
                var_16 &= ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned long long int) (signed char)-1)), (13898719002390825932ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12230)) * (((/* implicit */int) arr_6 [i_1]))))))), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned short)39046)))))));
            }
        } 
    } 
}
