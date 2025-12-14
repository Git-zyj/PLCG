/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222042
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
    var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_10)))))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
    var_13 = ((/* implicit */int) var_4);
    var_14 = ((/* implicit */long long int) (((!((_Bool)1))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (unsigned char)16);
                    var_16 = ((/* implicit */unsigned int) max((((((/* implicit */int) ((var_5) >= (var_5)))) >= (((/* implicit */int) ((unsigned char) arr_4 [(unsigned char)12] [i_1] [8U]))))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (var_10))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_4 - 1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)16)) >> (((arr_8 [i_3 - 1]) - (1043965157U)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_10)), (var_3))))) ^ (arr_2 [i_3 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) & (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned short)65532))))))));
                                var_17 = ((/* implicit */signed char) (-(arr_2 [i_1])));
                                var_18 = ((/* implicit */unsigned short) (((+(arr_8 [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_6)))))))));
                                var_19 = ((/* implicit */short) arr_7 [i_0] [i_0 + 4]);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (151800675U)));
                }
            } 
        } 
    } 
}
