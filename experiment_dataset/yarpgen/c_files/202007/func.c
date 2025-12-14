/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202007
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned char) var_9);
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    var_11 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 7ULL)))))));
                    arr_6 [5ULL] [i_0] [6ULL] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)7279)), (1790284811002450163LL)));
                }
                for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    arr_10 [(unsigned short)10] [13U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))) / (arr_1 [i_0]))))));
                    var_12 = ((/* implicit */signed char) var_5);
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1]), (((/* implicit */long long int) arr_1 [i_3 - 1]))))) ? (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65528)), (var_3)))) : ((+(arr_5 [i_3 - 1] [i_3 - 1] [13ULL])))));
                    arr_11 [i_0] [i_1] [i_1] [11ULL] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(-7LL)))) ? (var_6) : (((/* implicit */unsigned long long int) ((6LL) - (((/* implicit */long long int) -309114755)))))))));
                }
                for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] [13] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7LL)) ? (-7LL) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-4)))))));
                    var_14 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 0)) ? (0ULL) : (arr_14 [i_0] [i_0] [i_1] [i_4]))) ^ (((/* implicit */unsigned long long int) (~(5LL)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5068)))));
                    arr_16 [i_1] [(unsigned short)14] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((0LL), (7LL)))) && (((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)17]))));
                    var_15 = ((/* implicit */unsigned long long int) arr_0 [i_4] [i_4]);
                }
                var_16 = ((/* implicit */unsigned short) min(((+(arr_12 [i_0] [i_0]))), (((/* implicit */unsigned int) (-(309114755))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (-1LL)));
}
