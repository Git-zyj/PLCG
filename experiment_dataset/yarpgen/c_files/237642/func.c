/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237642
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
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) var_8)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));
        var_13 ^= ((/* implicit */unsigned short) ((((arr_0 [16U]) - (arr_0 [16]))) >> (((((/* implicit */int) arr_1 [i_0])) - (16919)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((1624102365150536084LL) / (-1624102365150536084LL)));
        var_14 = (unsigned char)255;
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) 1624102365150536103LL);
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)40)) ? (-1624102365150536084LL) : (((/* implicit */long long int) 4156500892U))))), (var_4)))));
                            arr_12 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (arr_8 [i_3 - 1] [i_3] [i_3])));
                            var_17 = ((/* implicit */int) ((unsigned int) arr_4 [i_1]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_2))));
}
