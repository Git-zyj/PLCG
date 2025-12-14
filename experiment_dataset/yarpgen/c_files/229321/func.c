/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229321
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
    var_11 = ((/* implicit */unsigned long long int) (-(var_6)));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 1])), (arr_1 [i_0]))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14255)) ? (max((3111349108U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)252)) ^ (((/* implicit */int) (unsigned char)240))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)222), ((unsigned char)249))))))))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (_Bool)1))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((int) -5825738879859312820LL)))));
        var_16 = ((/* implicit */unsigned char) (((-(arr_2 [i_1]))) - (min((arr_2 [i_1]), (arr_2 [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(1410285897816170374ULL))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_5))) ^ (((/* implicit */int) (signed char)98))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)240)) - (((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
            }
            arr_15 [i_2] = ((/* implicit */unsigned char) (-(((long long int) (unsigned char)16))));
            arr_16 [(short)9] = ((/* implicit */unsigned char) arr_6 [i_2]);
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 4; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) (unsigned char)8))))))));
                        var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */int) var_1)) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [20LL])) ? (arr_20 [16LL] [i_5] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137)))))))))))));
                        arr_22 [(unsigned short)22] = ((((/* implicit */_Bool) (+(arr_9 [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((7778768114743348078LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))), (arr_7 [i_3 - 2])))) : (((unsigned long long int) 1574761470)));
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_11 [13U] [i_7] [i_2] [i_7])), ((-(min((14712133014588830550ULL), (((/* implicit */unsigned long long int) (unsigned char)252))))))));
            arr_27 [i_7] [i_7] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) min((min((arr_13 [22LL]), (((/* implicit */int) (unsigned char)106)))), (((((/* implicit */_Bool) arr_25 [1LL] [19LL] [i_2])) ? (var_4) : (arr_26 [(unsigned char)16] [i_7] [i_7])))))), ((-(((((/* implicit */_Bool) (unsigned char)16)) ? (7778768114743348066LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240)))))))));
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2988631020868570630LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 11LL))))) : (((/* implicit */int) arr_23 [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_2] [i_2] [i_2])) / (((/* implicit */int) (signed char)116))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((var_0) >> (((2007337857U) - (2007337845U)))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_7])))))));
        }
        for (long long int i_8 = 4; i_8 < 21; i_8 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) (!(((407037633U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_8])))))));
            var_25 = ((/* implicit */unsigned int) min((var_25), (max((((/* implicit */unsigned int) max(((short)32767), ((short)29339)))), (((max((((/* implicit */unsigned int) (_Bool)1)), (1760592920U))) >> (((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)33)))) - (2)))))))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (((+(((/* implicit */int) ((_Bool) -813142702))))) < (((int) max((((/* implicit */long long int) 2805908920U)), (arr_29 [i_2] [i_8 - 4])))))))));
        }
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)243)) << (((/* implicit */int) (unsigned char)0))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min(((+(((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (short)29339))))))), (((arr_13 [i_9]) * (((/* implicit */int) (_Bool)1)))))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_31 [i_9])))))))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 4; i_10 < 11; i_10 += 2) 
        {
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(unsigned short)11] [i_9] [(unsigned short)11])) ? (min((((/* implicit */unsigned int) arr_23 [i_10 + 2] [i_10 - 2] [i_10 + 1])), (((((/* implicit */_Bool) (short)-25199)) ? (3048074417U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))))))));
            arr_36 [i_9] = var_8;
        }
        var_31 = ((/* implicit */signed char) (((+(2805908920U))) % (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (arr_8 [i_9] [i_9] [i_9]))))));
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) min((((392703908U) ^ (((/* implicit */unsigned int) arr_8 [i_9] [5U] [i_9])))), (((/* implicit */unsigned int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_9 [i_9] [i_9]), (arr_33 [i_9] [i_9] [i_9])))) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))))) : ((~(arr_33 [i_9] [i_9] [i_9])))));
    }
    var_33 = ((/* implicit */long long int) (-((-(min((var_9), (((/* implicit */unsigned long long int) var_4))))))));
    /* LoopSeq 1 */
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        var_34 = ((unsigned short) ((-3142981003709585673LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_11])))));
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) -20)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)247)))))));
        var_36 = ((/* implicit */unsigned short) (((+(62439453))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_5)))) ? (((/* implicit */int) arr_14 [i_11] [i_11] [i_11])) : (((/* implicit */int) ((arr_6 [(_Bool)1]) && (((/* implicit */_Bool) var_1)))))))));
        arr_40 [i_11] = ((/* implicit */signed char) (unsigned char)251);
        var_37 = ((/* implicit */unsigned int) max((var_37), ((-(max((((/* implicit */unsigned int) (unsigned char)78)), (arr_33 [i_11] [i_11] [i_11])))))));
    }
}
