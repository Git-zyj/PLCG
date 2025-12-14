/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28325
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) arr_0 [(short)13] [2]))))) : (((((/* implicit */int) (unsigned char)153)) & (((/* implicit */int) (short)(-32767 - 1))))))) <= ((+(((/* implicit */int) ((unsigned char) var_0)))))));
                var_10 = ((/* implicit */unsigned short) (-(((-1608411571) / (-1608411570)))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (-1608411568) : (1608411567)));
                var_11 -= ((/* implicit */signed char) (((-2147483647 - 1)) & (((((/* implicit */int) arr_3 [(unsigned short)12])) + ((-(-1608411570)))))));
                arr_7 [8U] [i_1] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) var_7)))), (((_Bool) (~(((/* implicit */int) arr_3 [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        var_12 -= ((/* implicit */int) arr_2 [(signed char)12] [i_2]);
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 6; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) var_2);
                    arr_15 [i_2] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_12 [i_2])) : (2429261903416449875ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_8 [i_3] [i_4])))) * ((~(((/* implicit */int) arr_13 [i_2] [i_2]))))));
                    var_14 = ((/* implicit */unsigned long long int) ((int) max((arr_4 [i_2 - 2] [i_2 - 2] [i_4 + 2]), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_4 + 2])))));
                    var_15 = ((/* implicit */_Bool) ((short) ((arr_4 [i_2 - 1] [i_2 - 1] [i_4 + 1]) > (arr_4 [i_2] [i_2 + 1] [i_4 - 1]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((int) arr_1 [i_2 - 3])))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)144)) - (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
                    arr_20 [i_2] [(signed char)2] [i_6] = ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 4; i_7 < 8; i_7 += 3) 
        {
            var_18 = ((/* implicit */int) (!((!(((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)65531))))))));
            var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 1]))) > ((~((~(var_7)))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((int) 1608411570)))));
            var_21 = (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_8 [i_2] [i_7])), (arr_16 [i_2]))))))));
        }
    }
    for (signed char i_8 = 2; i_8 < 9; i_8 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)111)) & (((/* implicit */int) ((((/* implicit */int) arr_25 [i_8])) > (1608411552))))));
        var_23 = ((/* implicit */unsigned int) arr_1 [i_8]);
        arr_29 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_1 [i_8])))))) ? ((-(var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8] [i_8 + 2])))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_6))))) : (((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_6)))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_1))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [14LL] [(short)0])) > (1608411567))))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -126482805)) : (arr_30 [i_9]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_2)))))))))))));
    }
    var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) var_0)) % ((+(((/* implicit */int) var_3))))))));
    var_27 = var_5;
}
