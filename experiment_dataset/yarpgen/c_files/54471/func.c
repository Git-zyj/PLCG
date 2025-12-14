/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54471
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
    var_13 &= ((/* implicit */short) (~(var_12)));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_1))));
    var_15 = ((/* implicit */signed char) ((int) var_3));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) arr_3 [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)254)) | (((/* implicit */int) arr_2 [i_3] [i_2]))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) % (1103404886653018114LL))))) : (((long long int) ((((/* implicit */int) arr_10 [i_0] [5LL] [i_2] [7])) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                            var_18 = ((/* implicit */unsigned short) min((max(((+(0U))), (((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15389)))))))), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */int) 4125343707U);
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) -1103404886653018114LL);
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((unsigned short) max((arr_4 [i_0]), (-1743271654)))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) < (-773896601)))))))));
                                var_21 = ((/* implicit */int) min((arr_18 [i_0] [i_1] [i_0] [(unsigned short)18] [(short)10]), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)9768)) : (arr_0 [i_4] [i_5 - 3]))))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) arr_2 [i_0] [i_0])))))) / (1103404886653018129LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44408)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)114))))) : (((1103404886653018114LL) / (((/* implicit */long long int) -1286181460)))))) : (min((((/* implicit */long long int) (short)25910)), (max((((/* implicit */long long int) (_Bool)1)), (-2912294661960754206LL)))))));
            }
        } 
    } 
}
