/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38688
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
    for (signed char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 3] [i_1 - 1])) ? (28ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_6 [i_0] [i_1 + 2] [i_1])))) : ((+(min((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_0])))))));
                var_12 = ((/* implicit */short) min((min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) (unsigned short)2048))))), (min((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)0)))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63487)) || (((/* implicit */_Bool) 1140848770630887624LL)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) min((min(((unsigned short)2049), (((/* implicit */unsigned short) (signed char)-33)))), (((/* implicit */unsigned short) (_Bool)0))))), (((((/* implicit */_Bool) (signed char)-5)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)2040)) : (((/* implicit */int) (unsigned short)63487)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_8 [i_0] [i_2])))))))));
                            var_13 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65527)) != (((/* implicit */int) (unsigned short)2071))))) != (((((/* implicit */int) (signed char)4)) * (((/* implicit */int) (_Bool)0)))))))) < ((+(((((/* implicit */_Bool) arr_14 [i_5] [i_1 + 1] [i_0])) ? (((/* implicit */long long int) -1284869181)) : (arr_2 [i_0])))))));
                            var_14 = min((arr_10 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_1 + 3] [i_0 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) (unsigned short)7991)) || (((/* implicit */_Bool) (signed char)-115)))) ? (2844214969U) : (((2158856790U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59294)))))))));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0))))))), (var_9)));
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-15))))) ? (min((3827356972U), (((/* implicit */unsigned int) (unsigned short)65510)))) : (min((1624883230U), (((/* implicit */unsigned int) (unsigned short)35682)))))) / (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)5259), (((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)4))))))))));
    var_18 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)53737))))) : (1663555473U))));
}
