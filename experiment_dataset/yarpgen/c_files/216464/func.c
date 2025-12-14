/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216464
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)96))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(-9136497582530323526LL)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)47))))) : ((-((-(1907568603231007901LL)))))));
    }
    for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1764435279U))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 658795697136798614LL)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4 + 1] [i_4] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1256370136)) ? (((/* implicit */int) (unsigned short)62100)) : (((/* implicit */int) (short)-15745))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 658795697136798614LL)))))) : (4294967295U)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (short)(-32767 - 1)))));
                }
            } 
        } 
        var_19 = ((/* implicit */int) (unsigned char)13);
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)423))));
                var_21 = ((/* implicit */unsigned long long int) 24838232U);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)203)))))));
}
