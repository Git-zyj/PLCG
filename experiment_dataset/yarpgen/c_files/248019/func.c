/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248019
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
    var_15 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [4LL] [4LL] = ((/* implicit */unsigned char) min(((short)-20920), (((/* implicit */short) (_Bool)1))));
                arr_6 [4ULL] [i_1] [4ULL] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) + ((+((+(((/* implicit */int) (signed char)-1))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] [i_0] = ((/* implicit */long long int) 17822416656441231657ULL);
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_1] [i_2] [i_0]));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [(_Bool)0] = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) 995335142)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])))))) ? (((/* implicit */int) (((!(arr_3 [i_0] [i_1]))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_11))))))) : (((((/* implicit */int) (short)-20929)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) == (arr_10 [i_0] [i_0] [i_0] [i_0]))))))));
                arr_15 [i_0] [i_1 - 1] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_1 + 1]))))))));
            }
        } 
    } 
}
