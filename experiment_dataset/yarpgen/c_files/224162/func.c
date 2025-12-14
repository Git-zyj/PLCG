/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224162
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 1146603466))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-119)))))));
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) ((signed char) min((arr_5 [i_0] [i_0] [i_0]), (var_3)))))));
                    var_12 = max((((((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32077))))) : (((unsigned long long int) (unsigned char)205)))), (((/* implicit */unsigned long long int) max((((unsigned char) arr_1 [i_1])), (((/* implicit */unsigned char) var_4))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) arr_2 [i_0]);
            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_3] [i_3]))) : (16736103655222386723ULL))))));
            var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) var_6))), ((((((+(((/* implicit */int) (signed char)-115)))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) var_1)), (arr_8 [i_3] [10] [i_0]))) - (12674596667782505082ULL)))))));
            var_16 &= ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned short) arr_2 [i_0])), (min((var_9), (arr_7 [i_3] [12ULL] [i_3]))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32077)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-26))));
        }
        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 2) 
        {
            var_18 = ((/* implicit */long long int) min((((((/* implicit */int) arr_9 [i_4 + 1])) & (((/* implicit */int) arr_9 [i_0])))), (((int) (signed char)-69))));
            var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)3)))) << (((/* implicit */int) arr_2 [i_4 + 2])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) ((short) arr_14 [i_5] [i_5] [i_0] [i_5]));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_4])) - (((/* implicit */int) var_5))));
            }
        }
        for (unsigned char i_6 = 4; i_6 < 14; i_6 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_9))))))));
            var_23 = ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) min(((unsigned short)65533), (((/* implicit */unsigned short) (unsigned char)16))))))) < (max((((/* implicit */int) ((signed char) var_3))), ((+(((/* implicit */int) var_9)))))));
        }
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            var_24 |= ((/* implicit */unsigned char) var_5);
            var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -1514044136)) ? (((/* implicit */unsigned long long int) ((((arr_5 [i_0] [i_7] [i_0]) + (2147483647))) << (((((/* implicit */int) var_5)) - (19590)))))) : (2030658216543578909ULL))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) - (((/* implicit */int) var_6)))))))));
        }
        /* LoopSeq 1 */
        for (short i_8 = 1; i_8 < 15; i_8 += 4) 
        {
            var_26 = ((/* implicit */int) max(((-(((838932848333764811LL) >> (((((/* implicit */int) var_5)) - (19540))))))), (min((((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))), (7696301820592290250LL)))));
            var_27 *= ((/* implicit */signed char) (~(((unsigned long long int) var_7))));
        }
    }
    for (int i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) 13013323193105176093ULL);
        /* LoopSeq 1 */
        for (signed char i_10 = 1; i_10 < 13; i_10 += 4) 
        {
            var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((min(((unsigned short)5), (((/* implicit */unsigned short) var_2)))), (((/* implicit */unsigned short) ((signed char) var_2))))))));
            var_30 = ((/* implicit */unsigned long long int) (unsigned short)14);
            var_31 = ((/* implicit */unsigned int) (unsigned char)144);
        }
        var_32 = ((/* implicit */signed char) (~(9675967434241606572ULL)));
    }
    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) ((signed char) var_7))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) ((_Bool) var_2)))));
}
