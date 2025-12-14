/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220460
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
    var_18 = ((int) (~(687753520)));
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((var_8) + (2147483647))) >> (((var_5) - (1725850497))))), (((/* implicit */int) (signed char)45)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1790940721)) <= (4294967289U)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_16)))) ? (1289725056U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-27664)) == ((-2147483647 - 1))))))));
        arr_5 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((var_9) - (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))));
    }
    for (unsigned char i_1 = 4; i_1 < 11; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) 2147483647)), (var_10))), (min((((/* implicit */unsigned int) var_3)), (var_6)))))) ? (((/* implicit */int) max(((short)32758), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) -6771164268698211030LL)) ? (((/* implicit */int) arr_7 [i_1 - 3])) : (1327328842)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) var_17);
                    var_22 = ((/* implicit */unsigned short) ((short) 6107472808935892926LL));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned char i_5 = 4; i_5 < 12; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (arr_12 [i_1] [i_1] [(_Bool)1] [i_5 + 1])))) || (((((/* implicit */unsigned long long int) var_6)) <= (max((((/* implicit */unsigned long long int) var_14)), (18446744073709551601ULL)))))));
                        var_24 = ((/* implicit */unsigned short) ((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (unsigned char)237))))) < (((/* implicit */int) ((unsigned char) var_11)))));
                        arr_22 [i_1] [(unsigned short)10] [i_5] [i_6] = ((/* implicit */int) ((unsigned long long int) arr_20 [i_5 - 1] [(signed char)11] [i_6] [i_5 - 4] [i_5 - 1]));
                        var_25 = ((/* implicit */unsigned char) (+(((int) -1367780657))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (((((/* implicit */_Bool) 12438901594222172886ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))))))));
    }
    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 1) 
    {
        var_27 = ((/* implicit */short) ((long long int) ((unsigned char) arr_0 [i_7 + 1])));
        arr_25 [(short)6] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [(signed char)4]))))) * (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) > ((-2147483647 - 1)))))))));
    }
}
