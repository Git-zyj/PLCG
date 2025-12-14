/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53368
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((~(((((/* implicit */_Bool) 16165658959861050898ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50312))) : (10468965371575123698ULL))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((unsigned short) 7201757414927643683ULL))))));
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)-58)), (549755811840ULL)));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)54))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_11)))) != (min((2147483631), (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12894271737267862002ULL)))))) < (7753488039100536377ULL)))));
        arr_4 [14ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4611685880988434432LL)) ? (8869244164826132600ULL) : (18446744073709551615ULL)));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) (-((~(arr_0 [i_1] [i_1])))));
        arr_8 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)63))));
        var_17 = ((/* implicit */signed char) (~((+(((/* implicit */int) (signed char)30))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 6112513897579917112ULL))) ? (((((/* implicit */_Bool) 15424818924406786090ULL)) ? (1915170483066062852ULL) : (((/* implicit */unsigned long long int) 466847833838757731LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))))) ? (((/* implicit */unsigned long long int) (~(466847833838757732LL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 466847833838757732LL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22825)))))) ? (var_8) : (((/* implicit */unsigned long long int) arr_0 [(signed char)6] [11LL]))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)511))) < (-183482032932356559LL)));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_14 [i_6]))));
                                var_21 = ((/* implicit */signed char) arr_19 [i_2] [i_3] [i_4] [i_5] [(unsigned short)10] [i_2]);
                            }
                        } 
                    } 
                } 
                var_22 &= ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_3])) : (var_10))) < (((/* implicit */int) arr_17 [i_3 - 1] [(signed char)12] [i_2] [(signed char)12])))))));
                var_23 += ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */unsigned long long int) -7877438286906309193LL)) : (1152921504606845952ULL)));
}
