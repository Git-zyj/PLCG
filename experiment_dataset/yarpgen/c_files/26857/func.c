/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26857
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (min((arr_2 [i_0] [0LL]), (((/* implicit */unsigned long long int) (~(872179137))))))));
        var_19 = ((/* implicit */unsigned char) (_Bool)1);
        var_20 = ((/* implicit */short) ((signed char) ((long long int) ((((/* implicit */_Bool) (short)-14172)) ? (arr_2 [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
        var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -148106569)) == (arr_0 [(_Bool)0]))))) : (var_15))), (((/* implicit */long long int) ((int) ((16777215LL) > (((/* implicit */long long int) ((/* implicit */int) (short)11709)))))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) -872179152)) - (arr_0 [i_1])))) ? (((148106569) >> (((((/* implicit */int) var_4)) - (51232))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (arr_2 [i_1] [i_1]))))))) ? (5116362797418479387LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
        arr_6 [i_1 + 1] = ((/* implicit */unsigned char) 1948229735);
        arr_7 [i_1] = ((/* implicit */unsigned char) var_4);
    }
    for (int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_1)))), ((!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1]))))));
        arr_11 [i_2] = ((/* implicit */unsigned char) (+(var_3)));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2])) + (((/* implicit */int) min((var_11), (((/* implicit */short) var_0))))))))));
        arr_12 [6U] &= ((/* implicit */unsigned short) (-(var_14)));
    }
    var_24 = ((/* implicit */unsigned char) var_1);
    var_25 = ((/* implicit */unsigned long long int) var_7);
    var_26 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (var_8)))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (long long int i_4 = 2; i_4 < 24; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 24; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        {
                            arr_26 [i_6] [i_4 - 1] [i_4 - 1] [i_6] &= ((/* implicit */unsigned long long int) arr_22 [i_3] [i_3]);
                            arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) var_15);
                            var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */long long int) ((/* implicit */int) ((signed char) 1117103813820416LL)))) / (arr_25 [i_6] [i_3] [i_5 + 1] [i_5 - 1] [i_3] [i_3])))));
                        }
                    } 
                } 
                arr_28 [i_4] [i_3] = ((/* implicit */long long int) ((unsigned short) arr_25 [i_3] [16] [i_4 - 2] [i_4 + 1] [i_3] [i_4]));
                arr_29 [i_4 - 1] = ((/* implicit */int) (_Bool)1);
                arr_30 [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) var_3)) != (min((var_8), (((/* implicit */unsigned int) var_4)))))));
                arr_31 [i_4 - 2] [11] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)0);
            }
        } 
    } 
}
