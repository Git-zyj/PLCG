/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44089
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (-(arr_1 [i_0 - 1]));
        var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)24576)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40959))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) (~(var_9)));
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((int) var_13)))));
                        var_20 -= ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) > (((/* implicit */int) var_15)))) ? (((/* implicit */int) (unsigned short)24559)) : (((((/* implicit */_Bool) 576425567931334656LL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)24576))))));
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)24576))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 2; i_5 < 11; i_5 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((-1975309779) | (((/* implicit */int) (unsigned short)24564))))), (((((/* implicit */_Bool) (unsigned short)40976)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (max(((~(3762865771558659363LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13)))))))));
        /* LoopSeq 2 */
        for (short i_6 = 3; i_6 < 9; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
                {
                    {
                        arr_24 [i_5] [i_6] [i_5 - 2] [i_5] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */long long int) arr_9 [i_5 - 1] [i_6 + 4] [i_6 - 3] [i_8 - 2])), ((+(var_9))))));
                        arr_25 [i_5] [i_5] [i_6] [i_8] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40976))) > (1080863910568919040ULL))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)61975)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) (unsigned short)27407)) : (((/* implicit */int) var_13))))) : (((arr_1 [(unsigned char)14]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24576)) / (996637478))))));
                        var_24 |= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (~(5760184229292968782LL)))), (((unsigned long long int) (_Bool)1)))) > (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((unsigned short)60935), ((unsigned short)24576)))), (((unsigned int) var_17)))))));
                    }
                } 
            } 
            var_25 &= ((/* implicit */short) (unsigned char)0);
            arr_26 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)60914)) ? (((/* implicit */int) (unsigned short)27407)) : (810193470))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27418)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60914))) : (var_6)))) ? (((/* implicit */int) (short)-13541)) : (((/* implicit */int) ((short) -1394799505))))) : (((int) ((((/* implicit */_Bool) (unsigned short)24564)) ? (arr_7 [i_5 + 1] [(short)5] [(short)19]) : (6144))))));
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (((+(((/* implicit */int) ((short) -2147483620))))) + (((((/* implicit */_Bool) min((4135953266U), (((/* implicit */unsigned int) var_4))))) ? (max((-810193471), (((/* implicit */int) (unsigned short)48285)))) : (((/* implicit */int) (unsigned char)196)))))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            arr_30 [i_5 + 1] [i_9] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) (unsigned char)128)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_10 = 3; i_10 < 10; i_10 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) (unsigned short)4621)) : (((/* implicit */int) (short)12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112))))) : (((/* implicit */int) arr_9 [i_10] [i_10 - 2] [i_5 - 1] [i_5 - 1]))));
                var_28 |= ((((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)24595)))) | (arr_17 [i_5 - 2] [i_10 + 2]));
                var_29 = ((/* implicit */unsigned long long int) -13LL);
            }
            for (unsigned short i_11 = 3; i_11 < 10; i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 12; i_12 += 4) 
                {
                    for (unsigned char i_13 = 2; i_13 < 12; i_13 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */short) min(((unsigned char)103), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) 8LL)), (10782318384340257553ULL))) <= (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)108)), (1048575)))))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_34 [i_5 + 1] [i_5 - 1] [i_5 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((arr_12 [(short)12] [14ULL] [4LL] [(short)5] [i_5]), (var_11)))) <= (((/* implicit */int) ((unsigned char) arr_20 [i_5] [i_9] [10]))))))) : ((-(var_9)))));
                            var_32 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)144))))), (max((((long long int) var_13)), (((/* implicit */long long int) (unsigned short)24576))))));
                        }
                    } 
                } 
                arr_42 [i_5] [i_9] [i_9] = ((/* implicit */long long int) min((((max((((/* implicit */unsigned long long int) 0)), (4934886119248252181ULL))) >> (((max((-9223372036854775797LL), (((/* implicit */long long int) var_4)))) - (136LL))))), (((/* implicit */unsigned long long int) ((_Bool) min((arr_17 [i_5] [i_11]), (-178227380)))))));
            }
            /* vectorizable */
            for (unsigned short i_14 = 3; i_14 < 10; i_14 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */int) ((((/* implicit */int) arr_14 [i_5 + 1])) == (((((/* implicit */_Bool) (unsigned short)37367)) ? (-1931731106) : (((/* implicit */int) (unsigned short)37367))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 4; i_15 < 10; i_15 += 3) 
                {
                    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (short)30427)) | (-1048576)))));
                            var_35 = ((((/* implicit */_Bool) (-(var_17)))) ? (((/* implicit */int) ((unsigned short) -9LL))) : (((((/* implicit */_Bool) var_16)) ? ((-2147483647 - 1)) : (arr_7 [i_5 - 1] [(signed char)20] [i_16]))));
                        }
                    } 
                } 
            }
            var_36 |= ((long long int) min((min((((/* implicit */unsigned int) (unsigned char)167)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-8479)) - (arr_15 [i_5 - 1]))))));
        }
    }
    var_37 |= ((/* implicit */short) (-(max((1675061295), (4)))));
    var_38 += ((/* implicit */short) var_2);
    var_39 = ((/* implicit */unsigned long long int) max((((max((704762556311549862LL), (((/* implicit */long long int) -45260235)))) + (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))))), (min((max((var_7), (((/* implicit */long long int) 810193449)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 490612433)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)84)))))))));
}
