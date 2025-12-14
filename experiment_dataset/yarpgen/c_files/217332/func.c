/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217332
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) 1346853983)))));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_1] [i_1] [i_1]));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_7 [(unsigned short)2] [i_3 - 1] [(unsigned short)2] [i_1 - 1] [8ULL]), (arr_7 [i_0] [i_3 - 1] [i_2] [i_1 - 1] [12ULL])))) ? ((-(((/* implicit */int) arr_7 [i_2] [i_3 - 1] [i_2] [i_1 - 1] [0U])))) : ((((_Bool)0) ? (-1346853983) : (((/* implicit */int) (unsigned short)20935)))))))));
                        var_16 += ((/* implicit */unsigned short) arr_6 [6LL] [i_1] [i_1 + 1] [i_1 - 1]);
                        var_17 = (-(var_5));
                    }
                    var_18 = ((((/* implicit */_Bool) 1346853991)) ? (((/* implicit */long long int) -1346853983)) : (5088913919492411632LL));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) -1346853983)) ? (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((-899672126) + (899672155))))) : (((/* implicit */int) (_Bool)1)))))));
                    var_20 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((-1) / (((/* implicit */int) arr_0 [i_0])))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) >> (((8380834270194413074ULL) - (8380834270194413058ULL)))))) ? (((/* implicit */long long int) arr_2 [i_1 - 1] [i_1 - 1])) : (1343912366642556597LL))));
                    var_21 = ((/* implicit */long long int) min(((unsigned short)4), (((/* implicit */unsigned short) (_Bool)1))));
                }
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (min((((unsigned int) -1160755327)), (((/* implicit */unsigned int) (unsigned short)65535))))));
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))));
                    arr_15 [i_0] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42894)) << (((((/* implicit */int) (unsigned char)127)) - (121)))))), (min((arr_8 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)228))))))));
                }
                var_24 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) -1363432863)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)112)), (var_13)))) : (var_5))), (((/* implicit */unsigned long long int) 16106127360LL))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) min((var_25), (((signed char) var_11))));
}
