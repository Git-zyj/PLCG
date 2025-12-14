/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189899
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_19 = ((unsigned char) (~((~(((/* implicit */int) var_15))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_3] = (i_0 % 2 == 0) ? (((/* implicit */short) (((-(((/* implicit */int) min(((signed char)123), (var_7)))))) << (((min((max((((/* implicit */unsigned int) (signed char)-117)), (var_9))), (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)13]))) : (var_9))))) - (16690U)))))) : (((/* implicit */short) (((-(((/* implicit */int) min(((signed char)123), (var_7)))))) << (((((min((max((((/* implicit */unsigned int) (signed char)-117)), (var_9))), (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)13]))) : (var_9))))) - (16690U))) - (7969U))))));
                        arr_13 [12U] [(signed char)21] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)46553))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 3; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) 18014381329612800ULL);
        arr_16 [i_4] = ((/* implicit */unsigned char) var_13);
        arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)121)))) <= (min((var_0), (((/* implicit */unsigned long long int) var_3))))))) >> (((((/* implicit */int) ((unsigned char) min((var_4), (((/* implicit */long long int) (unsigned short)46563)))))) - (221)))));
        arr_18 [i_4 + 2] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)18973)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16)))))))));
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((unsigned int) var_18)) > (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)241), (((/* implicit */unsigned char) var_5))))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-3931)), (var_12)))) ? (((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned long long int) arr_9 [18U])) : (var_6))) : (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46563))) : (var_11))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((var_18), ((-(((/* implicit */int) (unsigned short)13721)))))))));
        arr_22 [i_5] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-3931)) : (((/* implicit */int) (unsigned short)46572)))) + (2147483647))) << (((((((((/* implicit */int) var_7)) % (arr_21 [i_5] [i_5]))) + (150))) - (29)))))) && (((((/* implicit */int) max(((unsigned short)18984), (((/* implicit */unsigned short) var_3))))) != (((259319046) << (((/* implicit */int) arr_1 [i_5] [i_5]))))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (unsigned short i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_5] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */signed char) (((+(var_0))) >> (((((/* implicit */int) (signed char)110)) - (110)))));
                            arr_33 [i_5] [i_6] [i_6] [i_8] [i_8 - 1] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) var_6))), (max((var_11), (((/* implicit */unsigned int) arr_31 [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_9 - 1]))))));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_8] [i_7 + 2] [i_10 - 1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((var_9) ^ (((/* implicit */unsigned int) arr_8 [0U] [i_8]))))), (max((((/* implicit */unsigned long long int) var_17)), (arr_5 [i_8] [(signed char)19] [i_7] [(signed char)1]))))) / (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-3931)), (((((/* implicit */int) var_16)) << (((((var_17) + (1355187105))) - (12))))))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_7 - 2] [i_8] [(unsigned short)22] [i_8 - 1])) ^ (((/* implicit */int) (unsigned short)11865))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_1)));
                        }
                        arr_37 [i_5] [i_6] [i_8] [i_6] [i_5] = ((unsigned int) var_12);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_35 [i_11])) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) <= (var_13))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)18995)) : (((/* implicit */int) (signed char)90))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_11] [i_11])) && (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) ((var_9) != (var_9)))))))))));
        arr_41 [i_11] = ((/* implicit */unsigned int) (+(min((-10), (((/* implicit */int) max(((unsigned short)18991), (var_16))))))));
    }
    var_25 = ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned long long int) var_14)), (14293083133585461489ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)98)) && (((/* implicit */_Bool) var_15))))))), (((/* implicit */unsigned long long int) var_4))));
}
