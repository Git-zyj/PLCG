/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209849
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) (~((~((+(-3925347901403018234LL)))))));
                var_18 += ((/* implicit */signed char) (+((~((~(4582463631649896703LL)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-((+((~(((/* implicit */int) (unsigned short)65535)))))))))));
    var_20 = (~(266939792));
    var_21 = ((/* implicit */unsigned long long int) (-((~((~(((/* implicit */int) (short)-10198))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 3) 
    {
        var_22 = (+(((/* implicit */int) (short)10197)));
        var_23 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-26))));
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) (+((+((+(var_15)))))));
        arr_13 [i_3] [0U] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)10198))))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
        {
            arr_18 [8ULL] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)-15666))))));
            var_25 -= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_3])))))))));
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)88)))))))));
        }
        for (unsigned short i_5 = 2; i_5 < 13; i_5 += 2) /* same iter space */
        {
            arr_24 [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-89))))))))));
            arr_25 [i_5 + 1] [11ULL] = ((/* implicit */unsigned int) (~((~((+(((/* implicit */int) var_1))))))));
        }
    }
}
