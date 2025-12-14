/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41359
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
    var_18 = ((/* implicit */int) var_16);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [(short)9] = ((/* implicit */long long int) (+((-(((3522320830U) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) 5332633642268582432ULL);
        var_19 = ((/* implicit */short) 772646459U);
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8780786225049591304LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)103))) : (-630445208375387539LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (772646465U)))) % (min((((/* implicit */long long int) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((772646465U) - (772646439U)))))), (2390942344835860872LL)))));
        arr_5 [i_0] &= arr_0 [i_0];
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 772646468U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (772646465U))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-7277)))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_16 [i_2] [i_3] [i_2] [12LL] [12LL] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (3522320830U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_6)) : (var_3)))))))));
                        var_22 = ((/* implicit */signed char) (~((~(min((var_5), (((/* implicit */unsigned long long int) var_12))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            for (unsigned int i_6 = 1; i_6 < 10; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_24 [i_1] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) var_9);
                        arr_25 [i_5 - 1] [i_6] [i_5 - 1] [i_1 - 1] = ((/* implicit */unsigned short) var_2);
                        arr_26 [i_1] [i_1] [i_1] = ((/* implicit */long long int) 772646494U);
                    }
                    arr_27 [(signed char)5] [i_5] [i_5] [i_5] = min((3522320831U), (((((((/* implicit */unsigned int) 1430127343)) % (3522320830U))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))))));
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) != (var_1))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 268435455))))) : (((/* implicit */int) ((((/* implicit */long long int) 3522320831U)) == (6146553681152535062LL)))))))));
                }
            } 
        } 
        var_24 += ((/* implicit */long long int) 3522320830U);
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            arr_32 [11U] &= ((/* implicit */unsigned long long int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 327555995U)) > (var_5)))))));
            arr_33 [i_1 + 1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) 772646465U)), (1ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (2678047591U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
        }
    }
}
