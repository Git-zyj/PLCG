/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227912
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((max((((/* implicit */long long int) 3592081056U)), (arr_1 [i_0] [i_0 - 1]))) / (max((-736897553009508415LL), ((+(736897553009508415LL)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [(short)6])) ? (((/* implicit */int) arr_2 [i_3])) : (var_18)))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_1] [i_2])) < (736897553009508414LL)))) : (min((arr_0 [i_1] [i_3 + 1]), (((/* implicit */int) arr_2 [i_2]))))));
                        var_21 *= (short)24620;
                        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-14435))));
                        var_23 = ((/* implicit */long long int) -1626092824);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_24 |= var_10;
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((/* implicit */int) arr_11 [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_4]))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_11 [i_4] [12LL])) << (((((/* implicit */int) var_6)) + (11408)))))))));
    }
    for (long long int i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) arr_2 [(short)5])) << (((((/* implicit */int) (signed char)127)) - (127))))))));
        var_28 -= (!(((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-94)) ? (-1626092824) : (var_3))) : (((/* implicit */int) (unsigned short)16672))))));
        var_29 &= ((/* implicit */unsigned short) 3184842450U);
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2199023255296LL) : (arr_12 [i_8])))) ? (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_5] [i_5] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-3)))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1626092824)) ? (-2199023255297LL) : (((/* implicit */long long int) arr_3 [i_5 + 2] [i_6]))))) ? (((/* implicit */long long int) var_13)) : (((((/* implicit */_Bool) arr_18 [i_5] [11LL] [(short)9])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5])))))))));
                            var_31 = ((/* implicit */unsigned int) (unsigned short)48863);
                        }
                        for (unsigned int i_10 = 1; i_10 < 15; i_10 += 1) 
                        {
                            arr_29 [i_5] = ((/* implicit */long long int) (unsigned short)18131);
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_18)) % (min((((/* implicit */unsigned int) ((unsigned short) var_15))), ((+(3273317801U))))))))));
                        }
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16672))) ^ (5139699022463418115LL))))) / (max((((((/* implicit */_Bool) 961279317U)) ? (arr_30 [i_5] [i_6] [i_6] [i_5] [(signed char)4]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5]))))), (((/* implicit */long long int) var_10))))));
                            var_34 = ((/* implicit */short) (signed char)46);
                        }
                        var_35 = ((/* implicit */long long int) var_2);
                    }
                } 
            } 
        } 
    }
    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        var_36 = ((/* implicit */int) var_10);
        var_37 = ((/* implicit */short) ((((((((-1347975284) - (((/* implicit */int) (short)32767)))) % (((((/* implicit */int) (short)28148)) | (((/* implicit */int) arr_9 [0])))))) + (2147483647))) << (((((var_11) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_12])) ? (((/* implicit */int) arr_10 [i_12] [i_12])) : (((/* implicit */int) var_12))))))) - (6103499272304284061LL)))));
    }
    var_38 = ((/* implicit */int) (short)24228);
    var_39 = ((/* implicit */short) var_16);
    var_40 = ((/* implicit */long long int) ((short) min((((/* implicit */short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_17))))), (((short) var_9)))));
}
