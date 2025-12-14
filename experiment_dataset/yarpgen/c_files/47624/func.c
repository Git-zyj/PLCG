/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47624
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_13 |= var_10;
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_1 [i_1 - 2]))))) ? ((-(((/* implicit */int) arr_6 [i_3 + 1])))) : ((~(((/* implicit */int) arr_1 [i_1 - 2]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-2662569650010555483LL), (((/* implicit */long long int) (signed char)124))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-1)), (-2662569650010555483LL)))) && (((((/* implicit */_Bool) (signed char)-125)) || ((_Bool)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 13835058055282163712ULL)))))));
                            var_16 = ((/* implicit */_Bool) var_5);
                        }
                        var_17 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) < ((-(arr_8 [i_0] [(signed char)2] [i_2] [i_3])))))), ((~(((/* implicit */int) min((((/* implicit */unsigned short) (short)-18254)), (var_4))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(max((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [(short)7] [i_0])))), (((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0] [i_0] [i_0]))))))))));
    }
    var_19 = ((0ULL) <= (((/* implicit */unsigned long long int) -5888709965136872864LL)));
}
