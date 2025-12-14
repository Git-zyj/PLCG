/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195303
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_12 -= ((/* implicit */unsigned char) ((17693732118687631827ULL) < (753011955021919784ULL)));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((17693732118687631821ULL) & (6481540514169367180ULL)));
                }
            } 
        } 
        var_13 *= ((((/* implicit */_Bool) 17693732118687631827ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29422))) : (17693732118687631827ULL));
    }
    var_14 = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) 18014398509219840ULL)) || (((/* implicit */_Bool) 18428729675200331776ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (35183835217920LL)))) ? (((((/* implicit */_Bool) -2086552238)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (137438953471ULL))) : (((/* implicit */unsigned long long int) (~(1099511627648LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != ((+(((/* implicit */int) (unsigned char)216))))))))));
    var_15 -= ((/* implicit */short) min(((+(((/* implicit */int) (unsigned char)17)))), ((-(((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_13 [i_3] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((268435456) << (((2822375837696101138LL) - (2822375837696101137LL)))))) ? (((311469573) << (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) (_Bool)1))))) != (((753011955021919788ULL) & (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (6442450944ULL))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    {
                        arr_21 [i_3] [i_4] [i_5 + 2] [i_4] [i_3] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (min((((1396937183355554793ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22710))))), (((((/* implicit */_Bool) -1)) ? (18428729675200331779ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210)))))))));
                        var_16 |= ((/* implicit */long long int) ((min((8077390491363609686ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        arr_22 [i_3] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) != (max((((/* implicit */unsigned long long int) 3LL)), (8972672206573043202ULL)))));
                        var_17 = ((/* implicit */long long int) ((((((((((/* implicit */_Bool) 3667771529303345514ULL)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((((~(-2170618799360884382LL))) - (2170618799360884378LL))))) >> (((max((((15305851107803467948ULL) & (18446744073709551612ULL))), (((((/* implicit */_Bool) 273305697765039120LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8428366602488757027ULL))))) - (15305851107803467944ULL)))));
                        arr_23 [i_4] [i_6] [i_4 - 1] [i_4 - 1] [i_4] = ((((4611677222334365696ULL) - ((+(15443904348650809143ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */unsigned long long int) (unsigned char)182);
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (13815940282349602000ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) < (1482554719U)))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) >> (((-4785546698297930759LL) + (4785546698297930762LL)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-115))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))) + (8388607U)))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 140737488355327LL)) ? (13815940282349602004ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59)))));
        arr_26 [i_7] = ((/* implicit */signed char) ((0) >= (-885358900)));
    }
}
