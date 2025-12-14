/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228791
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)60)), (var_4)))))))) : ((((+(-192167570911819017LL))) | (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)73)))))))));
    var_13 = (((((~(((/* implicit */int) (unsigned char)61)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) : (var_1)))) < (var_9)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (((+(var_1))) * (((/* implicit */unsigned int) max((((-1636136764) / (var_10))), ((-(((/* implicit */int) arr_1 [i_0])))))))));
        var_14 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) > (((/* implicit */int) (unsigned char)66)))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)188)) ? (15521198628249888199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208)))))))) || (((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_0 [(signed char)2]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) var_2)) : (max((((/* implicit */int) (!(((/* implicit */_Bool) 3341852875276697962ULL))))), (var_10))))))));
            var_17 = (~((-(7064347150686518197LL))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1] [i_4] [i_3] [i_2] [i_1] = (-(((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_11))) || (((/* implicit */_Bool) arr_6 [i_1] [i_4]))))));
                            var_18 = ((/* implicit */signed char) (((+((+(arr_14 [i_5] [11LL] [i_3 + 3] [i_1] [i_1]))))) % (arr_10 [i_1] [i_2] [i_3])));
                            var_19 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_3 [i_1])), (min((var_7), (((/* implicit */unsigned long long int) var_0)))))), (((((/* implicit */unsigned long long int) 7064347150686518199LL)) - (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) var_9))))))));
                        }
                    } 
                } 
            } 
        }
        arr_18 [i_1] = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) 33292288U)), (arr_5 [i_1] [i_1]))) % (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_1 [i_1])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) ^ (3341852875276697949ULL)))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_3))));
        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)125))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */unsigned int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]);
        arr_24 [i_6] = ((/* implicit */unsigned short) var_6);
    }
}
