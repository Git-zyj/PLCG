/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27551
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) max((min((max((((/* implicit */unsigned long long int) (short)32742)), (8254936607448080056ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2344)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967285U))))))))));
    var_12 = ((/* implicit */int) min((var_12), ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8)))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 1099511562240LL))))))), (var_0)));
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_7)) | (((/* implicit */int) var_10)))) % (((/* implicit */int) var_0)))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_14 = (+((~(min((((/* implicit */unsigned int) var_4)), (2955282575U))))));
        var_15 = ((/* implicit */signed char) var_2);
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1] [i_2 - 1]))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_10 [i_2] [i_2]))))))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_6)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) 7692280224336979992ULL)))))), (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3)))))) : (((unsigned int) var_9))))));
                    var_19 = ((/* implicit */short) var_1);
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) max((-7282345346629774164LL), (((/* implicit */long long int) 1339684720U))))) : (((((/* implicit */_Bool) 1334148112950684593LL)) ? (137438953472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_1])))))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (33553920))) : (min((min((((/* implicit */int) (unsigned char)112)), (-47180565))), ((-(((/* implicit */int) arr_5 [i_3 + 1]))))))));
                }
                var_21 *= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [(short)1] [(short)1]))))));
            }
        }
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_15 [i_5]) : (arr_15 [i_5]))) : (((/* implicit */int) (short)21385))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)16232)), (((((/* implicit */_Bool) (unsigned short)53040)) ? (((/* implicit */int) arr_13 [i_5] [i_5])) : (((/* implicit */int) var_9))))))))))));
    }
}
