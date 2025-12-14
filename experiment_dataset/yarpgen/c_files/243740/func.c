/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243740
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
    var_10 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) / (var_1)))) ? (3144433398U) : (var_9)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_7)), (((3469542269U) << (((3469542269U) - (3469542239U)))))));
                    var_11 = ((/* implicit */short) 7);
                    arr_10 [i_2] [i_1 + 2] [i_2] = ((/* implicit */_Bool) min((max((arr_4 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_1 [i_1 + 2] [i_2])))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 - 1])) : (var_8)))));
                    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_1))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36911)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)-56))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)44074))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37948))) : (2171988965U)))));
                        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 + 1])) ? (((((/* implicit */int) (unsigned short)37566)) | (arr_1 [i_0] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -446724695))))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_2] = ((/* implicit */unsigned short) (short)-24744);
                        var_14 = ((/* implicit */unsigned char) (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (arr_5 [i_1] [i_1] [i_2])))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_15 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)150))))) ? ((~(((/* implicit */int) arr_19 [i_5] [i_0] [i_2] [i_0] [i_0])))) : (((/* implicit */int) min((arr_19 [i_0] [i_1 - 1] [i_1 - 2] [i_1] [i_5]), (((/* implicit */unsigned short) arr_2 [i_1 + 1])))))))));
                        var_16 ^= ((/* implicit */unsigned char) (+((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))) / (var_6)))))));
                        var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) >> (((var_6) - (3778775398U)))))) ? (((/* implicit */unsigned int) (-(arr_12 [i_0] [i_1] [i_0] [i_0])))) : ((+(arr_20 [i_0] [i_1 + 2] [i_2] [i_5]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_1] [i_1] [i_1] [i_0]))))))));
                    }
                }
            } 
        } 
    } 
}
