/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29037
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (((unsigned long long int) var_3)))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)203)) ? (18089506923538606969ULL) : (((/* implicit */unsigned long long int) 2616366292U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((unsigned char) (unsigned char)231);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)236)) ? (arr_3 [i_2] [i_0]) : (((/* implicit */int) (unsigned char)37)))))) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_8))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)19] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)236))))) : (((/* implicit */int) (unsigned char)166))));
                                arr_12 [i_3] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_0 - 1] [i_4])) : (min((10087981891395906808ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) arr_3 [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_14 [i_1] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) 7531321614408000447LL)))))), (min((min((7531321614408000447LL), (((/* implicit */long long int) (unsigned char)194)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)11])) ? (((/* implicit */int) var_8)) : (arr_3 [i_1] [i_1])))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)228)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((unsigned char) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))))))) : ((+(-7531321614408000447LL)))))) : (min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)253)), (arr_10 [(unsigned char)14] [i_1] [i_1] [(unsigned char)14] [i_2]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) (unsigned short)47828);
}
