/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229483
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
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = 14911700554149168043ULL;
                        arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_8);
                        var_17 = ((/* implicit */int) var_15);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_17 [i_4 - 1] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((-5781986672277165048LL) - (((/* implicit */long long int) 830660135U)))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((min((5781986672277165048LL), (-5781986672277165059LL))) / ((-(-5781986672277165027LL))))))));
                    var_19 &= ((/* implicit */unsigned long long int) max((-1590727312), (-1590727290)));
                    arr_18 [i_5] [i_4] [i_5] = min((((((/* implicit */_Bool) ((8191U) * (2856798052U)))) ? (((int) 1073740800)) : (((((/* implicit */int) (signed char)-50)) * (((/* implicit */int) (short)(-32767 - 1))))))), (((/* implicit */int) ((signed char) (unsigned short)39848))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            var_20 = max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_12)) * (arr_8 [i_0] [i_6] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_12 [i_6] [i_6] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_6 + 1])) ? (arr_7 [i_0]) : (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)65526)))), (((1590727270) - (((/* implicit */int) (signed char)-52))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) ((unsigned short) arr_12 [i_8] [i_6 + 1] [i_7 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1288579317)))))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(1638607721U))))));
                    }
                } 
            } 
        }
    }
    var_23 &= ((/* implicit */unsigned long long int) ((max((((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_1))), (((/* implicit */long long int) var_5)))) > (((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1028562521U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (8191U))))) - ((+(((/* implicit */int) (signed char)33))))));
}
