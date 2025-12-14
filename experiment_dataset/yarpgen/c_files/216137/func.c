/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216137
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3515635205U)));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_1 [i_0] [(short)5]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483584)) ? (((/* implicit */int) (_Bool)1)) : (-2147483588)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (-2147483584))))))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))), (arr_10 [i_1] [(unsigned char)7] [i_1] [(unsigned char)7]))))));
                            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) (-2147483647 - 1))) >= (arr_7 [(_Bool)1] [(_Bool)1] [i_2] [i_2]))) ? (((((/* implicit */_Bool) var_1)) ? (10) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_6 [i_0]))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) 5922724686061788520LL);
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27615))) <= (-5922724686061788505LL))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (short)15305))))))) : (min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0] [(short)8]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)9] [i_0]))))))))))));
                                var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_13 [i_0] [i_0] [i_4] [i_5] [i_6]) : (arr_17 [i_0] [i_1] [i_5] [i_5])))) ? ((~(1368107050781224027LL))) : (min((-5922724686061788530LL), (((/* implicit */long long int) (short)-14700)))))), ((~((((_Bool)0) ? (((/* implicit */long long int) arr_3 [i_0])) : (-5965790334044581923LL)))))));
                                var_21 = ((((/* implicit */_Bool) min((arr_9 [i_6] [9LL] [i_4] [i_5]), (arr_9 [i_0] [i_5] [i_4] [i_0])))) ? (((/* implicit */unsigned long long int) (+(5965790334044581923LL)))) : (((((/* implicit */_Bool) 1238151861U)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (min((var_1), (((/* implicit */unsigned long long int) 2147483591)))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_10 [i_6] [(_Bool)1] [i_1] [i_0])))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_5])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_10))))))) > ((~(7641282501530000279LL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 += ((/* implicit */_Bool) var_2);
}
