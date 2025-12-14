/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189914
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
    var_12 = ((((/* implicit */_Bool) (~(((int) var_8))))) ? (((/* implicit */int) (_Bool)1)) : (max((((((/* implicit */_Bool) (unsigned short)9769)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34452)))), (((/* implicit */int) (short)-1024)))));
    var_13 = ((/* implicit */short) ((int) var_9));
    var_14 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) 2010471172)) ? (((/* implicit */int) (unsigned short)40321)) : (((/* implicit */int) (short)-1024)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (short)-6218);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-6208)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0])))) == (((/* implicit */int) arr_2 [i_0]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_10 [i_2] [i_1] [i_2] &= ((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) >> (((16383) - (16371)))));
                var_15 &= ((/* implicit */signed char) 9655889793803700330ULL);
            }
            var_16 = ((/* implicit */int) max((var_16), (((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [20LL] [i_1])) : (((/* implicit */int) (short)-1024)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) ((((long long int) (_Bool)0)) >> (((/* implicit */int) ((_Bool) (short)-6236)))));
                arr_13 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((unsigned long long int) -2147483643)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34452)) ? (((/* implicit */int) (short)6223)) : (((/* implicit */int) arr_3 [i_0])))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
            {
                arr_17 [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34446)) ? (((/* implicit */int) (unsigned short)34466)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)-6205))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    for (int i_6 = 3; i_6 < 20; i_6 += 3) 
                    {
                        {
                            arr_26 [i_1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) (unsigned short)65535);
                            var_18 = (-(var_4));
                            arr_27 [i_0] [i_0] [i_0] [18LL] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_5 [(short)12] [i_1])) : (((/* implicit */int) (unsigned short)31065))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)31077)) : (((/* implicit */int) var_2))))) : (-1246961251594386559LL)));
                            var_19 = ((/* implicit */_Bool) min((var_19), ((!(((((/* implicit */_Bool) -8)) && (((/* implicit */_Bool) (unsigned char)241))))))));
                            var_20 = ((/* implicit */int) ((unsigned int) arr_25 [i_0] [i_1] [i_5 + 1] [i_6 + 2] [i_6] [i_0] [i_6]));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_4])) && (((/* implicit */_Bool) arr_8 [i_4] [i_1] [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [i_1] [1] [i_1] [i_1] [i_1] [i_0])))));
            }
        }
        /* LoopSeq 1 */
        for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40232)) >> (((532676608) - (532676581)))))) ? (10LL) : (((/* implicit */long long int) 1056964608)))))));
            var_23 = ((/* implicit */int) max((var_23), (((int) (unsigned short)34487))));
            var_24 = (+(9970875496076456673ULL));
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 3; i_8 < 21; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                {
                    arr_35 [i_0] [i_8 - 2] = ((/* implicit */unsigned long long int) ((long long int) 4294967279U));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8052)) ? (((int) (signed char)63)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (-1785334467)))) ? (arr_20 [i_0] [i_0] [i_0]) : (((unsigned int) (short)-6209))));
    }
}
