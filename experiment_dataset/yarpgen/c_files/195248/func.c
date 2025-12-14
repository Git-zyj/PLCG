/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195248
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
    var_15 &= ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (-6589878099692393245LL)))), (min((((/* implicit */unsigned long long int) var_14)), (var_4)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((var_10) ? (6589878099692393238LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-124)))))))), (((unsigned long long int) min((var_7), (((/* implicit */unsigned long long int) arr_7 [(signed char)0] [i_1])))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    arr_11 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) -6589878099692393230LL)))))) >> (((((((/* implicit */_Bool) 6584064362114458598ULL)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6589878099692393245LL)))))) : (max((-6589878099692393274LL), (var_1)))))));
                    var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -6589878099692393270LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 6589878099692393245LL)))), (arr_3 [i_0])));
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) (signed char)(-127 - 1)))))));
                    var_18 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (arr_3 [i_0]))))) * (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0 + 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)122)))))));
                }
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)222)) + ((-(((/* implicit */int) arr_22 [8]))))))), (var_2))))));
                                var_20 = ((/* implicit */signed char) 0ULL);
                                var_21 = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (17ULL))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_2 [4LL] [i_0])) : (9ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (var_2)))))));
                }
                /* LoopSeq 3 */
                for (short i_7 = 1; i_7 < 8; i_7 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) max((35ULL), (var_9)))))));
                    var_24 = ((/* implicit */long long int) max((min((((/* implicit */int) arr_25 [i_0 + 1] [i_1 - 1] [i_7 - 1])), (min((var_11), (((/* implicit */int) var_10)))))), (((/* implicit */int) (short)1259))));
                    arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_14)))))));
                }
                for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    var_25 -= ((/* implicit */short) ((_Bool) 28ULL));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (arr_21 [i_0] [i_1] [i_8] [i_8] [i_1] [7]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) ? (((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)13))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((arr_26 [6U] [i_0]), (((/* implicit */unsigned long long int) var_5)))))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 3; i_9 < 6; i_9 += 4) 
                    {
                        for (short i_10 = 4; i_10 < 9; i_10 += 4) 
                        {
                            {
                                var_27 = (-(min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((18446744073709551594ULL) - (18446744073709551581ULL)))))), (max((var_2), (((/* implicit */unsigned long long int) var_14)))))));
                                var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) var_11)) : (max((((/* implicit */long long int) arr_29 [(_Bool)1] [(_Bool)1] [i_8])), (15LL))))), (((/* implicit */long long int) var_11))));
                            }
                        } 
                    } 
                }
                for (int i_11 = 2; i_11 < 9; i_11 += 3) 
                {
                    arr_40 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)47)), (var_3)))) ? (arr_4 [i_0 + 2] [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)119))))) % (max((arr_4 [i_1 + 2] [i_1] [i_0]), (var_13)))));
                    var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_11])) != (((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_11 + 1])))))) * (((18446744073709551564ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105)))))));
                }
                var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) 11632669411339076643ULL)) || (((/* implicit */_Bool) 32ULL)))) ? (var_4) : (((((/* implicit */_Bool) 4355216751132109335LL)) ? (max((((/* implicit */unsigned long long int) (unsigned short)62683)), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)113)))))))));
            }
        } 
    } 
}
