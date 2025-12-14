/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193581
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65528))));
                                var_13 = ((((((/* implicit */int) (unsigned short)0)) - (max((((/* implicit */int) (_Bool)1)), (-1037835670))))) == ((~(((/* implicit */int) (signed char)114)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)9915)), (947906886)));
                /* LoopSeq 4 */
                for (unsigned short i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(14340294760093258407ULL)))))) || (((/* implicit */_Bool) var_10))));
                    var_16 = arr_2 [i_0 + 2];
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) 2272166861367315397ULL);
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_6]))));
                    var_19 = ((/* implicit */unsigned int) ((int) -1251258855));
                    arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) (~(var_10)));
                    var_20 = ((/* implicit */int) arr_18 [i_6] [i_0]);
                }
                for (unsigned int i_7 = 1; i_7 < 24; i_7 += 3) 
                {
                    var_21 = ((/* implicit */short) (-((~(((/* implicit */int) ((short) var_5)))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((-(((/* implicit */int) arr_20 [i_0] [i_1] [(unsigned char)22] [i_0])))) + (2147483647))) << ((((((~(((/* implicit */int) (_Bool)1)))) + (20))) - (18)))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)8))))))) : (((((/* implicit */int) (unsigned short)65528)) / (((/* implicit */int) (short)10088))))));
                    var_23 = ((/* implicit */unsigned int) arr_2 [i_0]);
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_24 = ((/* implicit */signed char) arr_17 [i_8] [i_1] [i_0] [i_0]);
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_8] [i_8] [i_0 - 1] [i_0] [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_8] [i_0] [i_0 + 2])) : (arr_23 [i_0] [i_0] [i_0 - 1] [i_0])));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) min((((2561685411U) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_7)))))))), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 1 */
    for (long long int i_9 = 3; i_9 < 12; i_9 += 4) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_15 [i_9]) ? (((/* implicit */int) arr_15 [i_9])) : (((/* implicit */int) arr_15 [i_9]))))) ? (((/* implicit */int) ((((((arr_4 [i_9]) + (2147483647))) << (((((/* implicit */int) (short)32760)) - (32760))))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)65530)) <= (((/* implicit */int) (short)-4595)))))))) : (((/* implicit */int) ((unsigned short) (unsigned char)242)))));
        var_28 = min(((_Bool)1), ((_Bool)1));
        arr_27 [i_9] = ((short) (+(((/* implicit */int) arr_2 [i_9 - 1]))));
        var_29 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-84)) & (((/* implicit */int) arr_22 [i_9] [i_9]))))) ? (((/* implicit */int) min(((short)-29449), (((/* implicit */short) (unsigned char)6))))) : (var_0)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            {
                var_30 = ((/* implicit */unsigned char) var_9);
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_31 = ((/* implicit */unsigned char) arr_24 [i_12] [i_11] [i_10]);
                    var_32 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */int) (short)10088)) | (((/* implicit */int) (unsigned char)13)))) * (((/* implicit */int) ((signed char) 4294967295U))))));
                    var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)82))));
                }
                for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    arr_40 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 16324293293064682793ULL))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)106)) : (arr_4 [i_10]))))))));
                    var_34 = ((/* implicit */_Bool) (unsigned short)65535);
                    var_35 = ((/* implicit */int) ((unsigned long long int) 3909038219457067988ULL));
                    arr_41 [i_10] [i_11] = (+(((((/* implicit */_Bool) arr_7 [i_10] [i_11] [i_10])) ? (((/* implicit */int) arr_7 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_7 [(short)18] [i_11] [i_10])))));
                    var_36 = ((/* implicit */_Bool) max(((-(arr_31 [i_10] [i_10]))), (((/* implicit */int) var_2))));
                }
            }
        } 
    } 
    var_37 = ((/* implicit */signed char) (+(max(((-(var_10))), ((-(((/* implicit */int) (unsigned char)124))))))));
}
