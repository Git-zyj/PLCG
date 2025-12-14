/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52309
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)26521))));
                    var_16 |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */int) (unsigned short)65535)) >> (((4274941760569742449ULL) - (4274941760569742445ULL)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 8; i_3 += 1) /* same iter space */
        {
            arr_8 [i_3] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)12546)) ^ (((/* implicit */int) arr_2 [i_3 + 2] [i_3 - 1] [i_3 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-67)))))));
            var_17 = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_3 + 2] [i_3 + 2]))) - (1135624643U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [4ULL] [(_Bool)1]))))));
            var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_3 + 1]), (arr_0 [i_3 - 1]))))) != (((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) / (max((((/* implicit */unsigned long long int) (unsigned short)43727)), (15038854665835453748ULL)))))));
        }
        for (int i_4 = 1; i_4 < 8; i_4 += 1) /* same iter space */
        {
            var_19 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((3943971141U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21809)) != (((/* implicit */int) (unsigned short)10))))))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned char)47))));
        }
        for (int i_5 = 1; i_5 < 8; i_5 += 1) /* same iter space */
        {
            var_21 += ((/* implicit */_Bool) ((int) (unsigned char)237));
            var_22 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_5 + 2] [i_5 + 3] [i_5 + 3])), ((unsigned short)29863))))));
            var_23 = ((/* implicit */unsigned int) max((((unsigned short) ((-3233997741596049911LL) - (((/* implicit */long long int) 4290772992U))))), (((unsigned short) (~(((/* implicit */int) arr_0 [4ULL])))))));
        }
    }
    var_24 = ((/* implicit */unsigned int) ((long long int) (+(((3407889407874097868ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1008))))))));
}
