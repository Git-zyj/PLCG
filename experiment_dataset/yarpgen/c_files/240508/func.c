/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240508
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
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) ((((_Bool) 2578215062U)) ? (((/* implicit */int) ((signed char) arr_7 [i_1 - 1] [i_0 + 2] [i_0 + 1]))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)60)), ((short)12377))))));
                    arr_9 [i_1 + 1] [i_1 + 1] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((6476786688334952798ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60)))))))) - (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [5ULL] [i_0] [i_2])))) ^ (((long long int) arr_8 [i_2] [i_2] [i_2]))))));
                    var_21 = ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]);
                }
                var_22 = ((/* implicit */int) (+(((1539569183U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)32752)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((11719327779743790526ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */int) var_2)) + (((((/* implicit */int) var_16)) & (-965600938)))))));
    var_24 *= ((/* implicit */short) (signed char)-18);
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) (_Bool)1)))) ? (((long long int) (short)32743)) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned long long int) (unsigned char)230)))))));
}
