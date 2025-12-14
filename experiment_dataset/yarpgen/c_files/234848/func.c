/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234848
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((max((6480901911374428209LL), (((/* implicit */long long int) (unsigned char)214)))), (((/* implicit */long long int) max((arr_4 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (arr_6 [i_1])))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (unsigned short)62337))));
                            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) arr_4 [i_2])))) : ((-(((/* implicit */int) var_0)))))) > (((int) arr_8 [i_3] [i_3 + 1] [i_3 - 2] [i_2 + 1]))));
                            arr_11 [i_0] [i_0] [i_1] [i_3 - 2] = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) ((3226494934U) == (((/* implicit */unsigned int) arr_7 [i_2] [i_2]))))))));
                            arr_12 [i_0] [14ULL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((arr_5 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) : (((((/* implicit */_Bool) max((1068472362U), (((/* implicit */unsigned int) (unsigned char)214))))) ? (7279644030993800991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 805306368U))))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((unsigned long long int) ((unsigned char) arr_9 [i_1] [i_0] [i_0])))));
                var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)251))), (((unsigned long long int) arr_1 [i_1] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)12324)))));
                arr_20 [i_4 + 3] [i_4 + 3] [i_5] = min((arr_0 [i_4 + 2] [i_5]), (((/* implicit */signed char) ((_Bool) min((((/* implicit */int) arr_3 [i_4])), ((-2147483647 - 1)))))));
                var_16 = (~(max(((((-2147483647 - 1)) / (((/* implicit */int) arr_19 [i_5] [i_5] [i_4])))), (arr_16 [i_4]))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((signed char) (unsigned char)4))) * (((/* implicit */int) ((unsigned char) var_5))))));
}
