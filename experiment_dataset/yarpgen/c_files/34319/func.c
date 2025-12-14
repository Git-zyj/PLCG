/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34319
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
    var_18 = ((/* implicit */short) var_17);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (var_4)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_8)) : (var_4)))))) ? (max((((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((signed char) var_13)))) ? (((((/* implicit */_Bool) ((long long int) var_14))) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 32767LL)) ? (1000563558) : (90596666))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -32766LL)) ? (((/* implicit */int) (short)-31220)) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) : (var_1)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [(short)14]) : (arr_0 [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (((/* implicit */int) arr_1 [i_0])))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [3U])) ? (arr_0 [3]) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [(unsigned char)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [(signed char)8])))) : (arr_0 [(short)10])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) ((_Bool) min((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])) : (arr_0 [3LL]))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])) : (arr_0 [i_1]))))));
        var_25 = ((/* implicit */unsigned int) ((unsigned char) ((_Bool) min((arr_1 [i_1]), (arr_1 [(short)5])))));
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)16])))) : (((/* implicit */unsigned long long int) arr_2 [i_1] [(signed char)11])))), (((unsigned long long int) (_Bool)1))));
        var_26 = ((/* implicit */long long int) min((var_26), (arr_2 [i_1] [i_1])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) -32767LL))), (((((/* implicit */_Bool) max((arr_1 [i_2]), (arr_1 [i_2])))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)26905))) : (-32767LL)))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_5 [(unsigned short)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -32761LL)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (short)-28648))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            arr_10 [i_2] [i_2] = max((((/* implicit */long long int) (signed char)-54)), (32780LL));
            var_29 = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2]);
        }
        var_30 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)127)), (32765LL)));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -32768LL)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (unsigned char)141))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3968))) : (-32784LL)))) ? (-8533420034100980120LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))))) : (((((/* implicit */_Bool) ((unsigned char) 1LL))) ? (((long long int) (short)31219)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_4]))))))));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */long long int) 332078497U)) : (-32781LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_12 [11])) : (((/* implicit */int) arr_7 [i_4]))))) ? (arr_8 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_8 [i_4] [i_4])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))));
        var_32 = ((/* implicit */long long int) ((unsigned int) arr_9 [i_4] [i_4] [i_4]));
    }
}
