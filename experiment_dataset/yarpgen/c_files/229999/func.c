/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229999
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) var_5);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))))), ((unsigned short)2040)));
                    arr_10 [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */signed char) min((((min((((/* implicit */unsigned long long int) (unsigned short)2040)), (3265998324256802960ULL))) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((3265998324256802944ULL), (((/* implicit */unsigned long long int) (unsigned short)58426))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 |= max(((unsigned short)63495), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(3265998324256802960ULL))))))));
                                var_16 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */int) var_7)), (743329023)))))) || (((/* implicit */_Bool) (-((+(((/* implicit */int) var_12)))))))));
                                var_17 -= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((3265998324256802960ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [19U] [i_2] [i_3]))))))))), (((((/* implicit */_Bool) (short)32113)) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [(signed char)21] [i_0])) <= (((/* implicit */int) var_6))))) : (((((/* implicit */int) (unsigned short)63471)) << (((/* implicit */int) (short)0))))))));
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min(((signed char)118), ((signed char)-119)));
                                arr_16 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (signed char)-126);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) 15424702487946659948ULL)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))))))) ? (((/* implicit */int) ((15424702487946659964ULL) == (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL)))))))) : (((/* implicit */int) var_12))));
}
