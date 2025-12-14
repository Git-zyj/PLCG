/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231861
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
    for (long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_10 = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), ((+(max((5801385304948890642ULL), (((/* implicit */unsigned long long int) 4294967295U)))))));
        arr_2 [15] [i_0] = ((/* implicit */int) max((max((140737488355327LL), (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -140737488355346LL))))) << (((12645358768760660965ULL) - (12645358768760660951ULL))))))));
        var_11 -= ((/* implicit */short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) & (17874524135419206733ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))) <= (((/* implicit */unsigned long long int) max((4294967290U), (((/* implicit */unsigned int) (_Bool)1)))))));
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (+(((12645358768760660951ULL) - (5141512565677756415ULL))))))));
        var_13 = ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-2882)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)0))))) != (303573529U));
        arr_5 [i_1] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)-67)) != (((/* implicit */int) (signed char)-117))))));
        var_14 = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) -1270600089520975711LL)), (var_5))) ^ (((((/* implicit */unsigned long long int) 2375229727U)) ^ (5801385304948890640ULL))))) << (((max((((/* implicit */unsigned int) var_2)), (916003793U))) - (1210274255U)))));
    }
    for (long long int i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_8))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)8)) / (((/* implicit */int) (signed char)-118)))))));
                    arr_16 [i_3] [i_3] [i_4] [i_2] = ((/* implicit */signed char) 12645358768760660965ULL);
                    arr_17 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((12645358768760660987ULL) / (((/* implicit */unsigned long long int) 5971775558776694437LL)))));
                    var_16 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)-124)))), ((~(((/* implicit */int) var_3))))));
                }
            } 
        } 
        var_17 = (((~(((/* implicit */int) (unsigned char)194)))) + (((/* implicit */int) ((257698037760LL) <= (((/* implicit */long long int) 2205822522U))))));
        arr_18 [i_2] = ((/* implicit */long long int) max((max((12645358768760660986ULL), (((/* implicit */unsigned long long int) 303573529U)))), (((var_5) + (((/* implicit */unsigned long long int) 303573517U))))));
    }
    var_18 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)39))))))))));
}
