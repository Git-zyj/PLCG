/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230259
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
    var_14 ^= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_11)))), (min((((((/* implicit */int) (short)-16624)) >= (-1))), (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] [(unsigned short)4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((unsigned char) var_5))), (arr_6 [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) arr_10 [i_0]);
                            arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) ((max((226135034U), (((/* implicit */unsigned int) -622867448)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((((/* implicit */short) var_10)), (var_9)))))) - (((((/* implicit */_Bool) 3ULL)) ? (0) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        var_16 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_16 [1])), (var_7))))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)41687))))) ? (((((/* implicit */_Bool) arr_17 [i_4])) ? (((((/* implicit */_Bool) var_0)) ? (0) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((unsigned char)248), (((/* implicit */unsigned char) (signed char)-85))))))) : (((/* implicit */int) min((arr_16 [i_4 + 1]), (arr_16 [i_4])))))))));
    }
    var_18 = ((/* implicit */unsigned char) var_4);
}
